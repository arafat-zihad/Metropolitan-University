//https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a, b, cnt = 0, max_p = 0;
    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        
        cnt = cnt - a;
        cnt = cnt + b;

        max_p = max(max_p, cnt);
        
    }
    cout << max_p << endl;
    return 0;
}  