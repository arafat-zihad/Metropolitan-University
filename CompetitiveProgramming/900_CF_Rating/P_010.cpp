// https://codeforces.com/problemset/problem/313/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int l = n % 10;
    int ll =  (n / 10) % 10;
    if(n >= 0){
        cout << n << endl;
    }else{
        
        if(ll != 0 && ll < l){
            cout << (n / 100) * 10 + (n % 10);
        } else{
             cout << n / 10;
        }

    // foe
    }
    return 0;
}
