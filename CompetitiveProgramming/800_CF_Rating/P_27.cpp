//https://codeforces.com/problemset/problem/344/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int cnt = 0;
    while (n--){
        int p;
        int a; cin >> a;

        if(p != a){
            cnt++;
        }
        p = a;
    }
    cout << cnt << endl;
    
    return 0;
}