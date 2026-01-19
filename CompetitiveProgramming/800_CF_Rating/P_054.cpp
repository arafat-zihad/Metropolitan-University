// https://codeforces.com/problemset/problem/1676/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;

    while (t--)
    {
        string s; cin >> s;
        int first = s[0] + s[1] + s[2];
        int sec = s[3] + s[4] + s[5];
        if(first == sec){
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}