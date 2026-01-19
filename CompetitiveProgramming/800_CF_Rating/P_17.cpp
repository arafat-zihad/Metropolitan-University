//https://codeforces.com/contest/1619/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string a, b;

        for(size_t i = 0; i < s.size()/2; i++){
            a += s[i];
        }
        for(size_t i = s.size()/2; i < s.size(); i++){
            b += s[i];
        }

        if(a == b){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}