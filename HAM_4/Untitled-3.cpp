#include <bits/stdc++.h>
using namespace std;

bool KiemTraNguyenTo(int n) {

        if (n <= 1) return false; 
        
        for (int i = 2; i <= sqrt(n); ++i) if (n % i == 0) return false;
        return true;
}

void InNguyenTo(int dau, int cuoi) {
    
        for (int i = dau; i <= cuoi; ++i) if (KiemTraNguyenTo(i)) cout << i << " ";

        cout << endl;
}

int main() {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int dau, cuoi;
        cin >> dau  >> cuoi;

        InNguyenTo(dau, cuoi);

        return 0;
}
