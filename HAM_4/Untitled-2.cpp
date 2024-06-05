#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year) { return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); }

int HopLe(int d, int m, int y) {

        int check_date[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        if (y < 1) return 0; 
        if (m < 1 || m > 12) return 0;
        if (m == 2 && isLeapYear(y)) check_date[1] = 29;
        if (d < 1 || d > check_date[m - 1]) return 0;

        return 1;
}

int main() {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int d, m, y;
        cin >> d >> m >> y;

        if (HopLe(d, m, y)) { cout << "1" << endl;} 
        else { cout << "0" << endl; }

        return 0;
}
