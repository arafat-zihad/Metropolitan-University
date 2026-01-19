//https://codeforces.com/problemset/problem/996/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    vector<int>v = {100, 20, 10, 5, 1};
    int cnt = 0;
    for (int i = 0; n!= 0; )
    {
        if(n >= v[i]){
            n -= v[i];
            cnt++;
        } else {
            i++;
        }
    }
    cout << cnt << endl;
    
    return 0;
}