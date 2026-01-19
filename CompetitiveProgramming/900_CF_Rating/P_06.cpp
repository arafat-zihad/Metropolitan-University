//https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    bool flag = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'H'){
            flag = 1;
            break;

        }
        else if(s[i] == 'Q'){
            flag = 1;
            break;

        }
        else if(s[i] == '9'){
            flag = 1;
            break;

        }
        else{
            flag = 0;
        }
    }
    if(flag == 0) cout << "NO" << endl;
    else{
        cout << "YES" <<endl;
    }
    return 0;
}