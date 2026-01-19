//https://codeforces.com/problemset/problem/427/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int cnt = 0, store = 0;
    for(int i = 0; i < n; i++){
        if(v[i] > 0){
            store += v[i];
        }
        else if(store > 0 && v[i] == -1){
            store = store - 1;
        } else {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}