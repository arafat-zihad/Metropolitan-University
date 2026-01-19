//https://codeforces.com/problemset/problem/758/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int max = INT_MIN;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if(v[i] > max) max = v[i];
    }
    for(int i = 0; i < n; i++){
        if(v[i] == max) continue;
        if(v[i] < max){
            v[i] = max - v[i];
        }
        
        cnt += v[i];
    }

    cout << cnt << endl;
    
    return 0;
}