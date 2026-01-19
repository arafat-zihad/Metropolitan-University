//https://codeforces.com/problemset/problem/69/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    // int total = 0;
    int Sumx = 0, Sumy = 0, Sumz = 0;

    while(n--){
        int x, y, z;
        cin >> x >> y >> z;

        Sumx += x; Sumy += y; Sumz += z;
        // total += x + y + z;

    }
    if(Sumx == 0 && Sumy == 0 && Sumz == 0){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    return 0;
}