// https://codeforces.com/problemset/problem/467/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int cnt = 0;
    while (n--){
        int p, c;
        cin >> p >> c;
        int a = c - p;
        if(a >= 2){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}