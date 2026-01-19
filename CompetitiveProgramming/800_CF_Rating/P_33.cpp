//https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    string s = to_string(n);
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '4' || s[i] == '7'){
            cnt++;
        }
    }

    if(cnt == 7 || cnt == 4){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}