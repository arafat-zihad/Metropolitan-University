//https://codeforces.com/problemset/problem/1692/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>v;
    
    while(n--){

        vector<int> v(4); 
        int cnt =0;
        for(int i = 0; i < v.size(); i++){
            cin >> v[i];
        }
        for(int i = 0; i < v.size(); i++){
            if(v[i] > v[0]){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}