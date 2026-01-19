//https://codeforces.com/problemset/problem/1512/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector <int> v(n); 

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int store = -1;
        int similar;

        if(v[0] == v[1]) similar = v[0];
        else if(v[0] == v[2]) similar = v[0];
        else similar = v[1];

        for(int i = 0; i < n; i++){
            if(v[i] != similar){
                store = i+1;
                break;
            }
        }
        cout << store << endl;
    }
    
    return 0;
}