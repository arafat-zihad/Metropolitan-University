//https://codeforces.com/problemset/problem/1873/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;

    while (t--)
    {
        string s; cin >> s;
        string a = "abc";
        int cnt = 0;
        for (int i = 0; i < 3; i++)
        {
            if(s[i] != a[i]){
                cnt++;
            }
        }
        if(cnt <= 2) cout << "YES" <<endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}