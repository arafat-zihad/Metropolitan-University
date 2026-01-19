//https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    string word = "hello";
    int j = 0;
    for(size_t i = 0; i < s.size(); i++){
        if(s[i] == word[j]){
            j++;
        }
        if(j == 5){
            break;
        }
    }
    if(j == 5) cout << "YES" << endl;
    else {
        cout << "NO" << endl;
    }

    

    return 0;
}