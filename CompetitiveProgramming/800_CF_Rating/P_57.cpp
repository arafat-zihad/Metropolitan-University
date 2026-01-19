//https://codeforces.com/problemset/problem/1829/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        string c = "codeforces";
        int cnt =0;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] != c[i]){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}