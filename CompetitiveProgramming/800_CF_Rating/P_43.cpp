//https://codeforces.com/problemset/problem/520/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    bool arr[26] = {false};

    for(int i = 0; i < n ; i++){
        s[i] = tolower(s[i]);
        arr[s[i] - 'a'] = true;
    }

    int cntF = 0;

    for(int i = 0; i < 26 ; i++){
        if(!arr[i]) cntF++;
    }
    if(cntF == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}