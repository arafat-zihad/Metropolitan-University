//https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int cnt = 0;

    while(n--){
        int a, b, c; cin >> a >> b >> c;
        int sum = a + b + c;
        if(sum >= 2){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}