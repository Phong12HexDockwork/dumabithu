#include <bits/stdc++.h>
using namespace std;

bool check (int a , int b) { return (a<b); }
int min_r (int x, int y , int z){

        cin >> x >> y >> z;
        cout << min({ x, y, z }, check) << "\n";
        return 0;

}
int main () { 

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int x,y,z; min_r (x,y,z);

        return 0 ; 
}