#include <bits/stdc++.h>
using namespace std;

int TimUCLN(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a  >> b;

    int ucln = TimUCLN(a, b); cout << ucln ;
    
    return 0;
}
