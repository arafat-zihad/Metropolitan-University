//https://codeforces.com/contest/1926/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int cntA =0, cntB = 0;

        for(size_t i = 0; i < s.size(); i++){
            if(s[i] == 65) cntA++;
            if(s[i] == 66) cntB++;
        }
        
        if(cntA > cntB) cout << "A" << endl;
        else cout << "B" << endl;
    } 

    return 0;
}