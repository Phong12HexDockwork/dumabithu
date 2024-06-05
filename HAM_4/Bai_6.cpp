#include <bits/stdc++.h>

using namespace std;


void TinhTG(float a, float b, float c, float &dt, float &cv) {

      cv = a + b + c;
      float p = cv / 2;
      dt = sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
  
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
  
      float a , b , c ;
      float dt, cv;
  
      cin >> a >> b >> c;
      
      TinhTG(a, b, c, dt, cv);
      
      cout << "Chu vi: " << cv << endl;
      cout << "Diện tích: " << dt << endl;
      
    return 0;
}
