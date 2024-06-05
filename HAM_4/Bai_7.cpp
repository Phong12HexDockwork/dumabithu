#include <bits/stdc++.h>

using namespace std;


int GiaiPTBacHai(float a, float b, float c, float &t1, float &t2) {
      float delta = b * b - 4 * a * c;
      if (delta < 0) {
          return 0; // Vô nghiệm
      } else if (delta == 0) {
          t1 = -b / (2 * a);
          return 1; // Nghiệm kép
      } else {
          delta = sqrt(delta);
          t1 = (-b + delta) / (2 * a);
          t2 = (-b - delta) / (2 * a);
          return 2; // Hai nghiệm phân biệt
      }
}

// Hàm giải phương trình trùng phương
void GiaiPTTrungPhuong(float a, float b, float c, int &sn, vector<float> &nghiems) {
    float t1, t2;
    int soNghiemT = GiaiPTBacHai(a, b, c, t1, t2);
    
    sn = 0;
    nghiems.clear();
    
    if (soNghiemT == 0) {
        // Không có nghiệm
        return;
    }
    
    if (soNghiemT == 1) {
        // Có một nghiệm t1
        if (t1 >= 0) {
            nghiems.push_back(sqrt(t1));
            nghiems.push_back(-sqrt(t1));
            sn = 2;
        }
    } else {
        // Có hai nghiệm t1, t2
        if (t1 >= 0) {
            nghiems.push_back(sqrt(t1));
            nghiems.push_back(-sqrt(t1));
            sn += 2;
        }
        if (t2 >= 0) {
            nghiems.push_back(sqrt(t2));
            nghiems.push_back(-sqrt(t2));
            sn += 2;
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float a , b , c ;
    int sn;
    vector<float> nghiems;

    cin >> a >> b >> c;
    
    GiaiPTTrungPhuong(a, b, c, sn, nghiems);
    
    cout << "So nghiem: " << sn << endl;
    for (size_t i = 0; i < nghiems.size(); ++i) {
        cout << "Nghiem x" << i + 1 << ": " << nghiems[i] << endl;
    }
    
    return 0;
}
