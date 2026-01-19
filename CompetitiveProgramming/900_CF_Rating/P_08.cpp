// https://codeforces.com/problemset/problem/580/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int max = 1, cnt = 1;
 
    for (int i = 0; i < n -1 ; i++)
    {
        if(v[i] == v[i+1] || v[i] < v[i+1]){
 
            cnt++;
            if(cnt > max){
                max = cnt;
            } 
        }
        else 
        cnt = 1;
    } 
    
    cout << max << endl;
    
    
    return 0;
}