// https://codeforces.com/problemset/problem/43/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int cnt = 0, bnt =0;
    vector <string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string a = s[0], b;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == a){
            cnt++;
        } else{
            b = s[i];
            bnt++;
        } 
    }
    
    if(cnt > bnt){
        cout << a << endl;
    }
    else if(cnt < bnt){
        cout << b << endl;
    } 
    
    return 0;
}