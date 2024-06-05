#include <bits/stdc++.h>

using namespace std;

void InTGPascal(int n) { 

    int numbers[n][n];
    for (int row = 0; row < n; row++)
    {
            for (int col = 0; col <= row; col++){
            if (col == 0 || col == row){ numbers[row][col] = 1;}
            else{numbers[row][col] = numbers[row - 1][col - 1] + numbers[row - 1][col];}
            cout << numbers[row][col] << "\t";}
            cout << endl;
    }
}

    
int main () {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n ;

    InTGPascal(n) ;
    return 0;
}