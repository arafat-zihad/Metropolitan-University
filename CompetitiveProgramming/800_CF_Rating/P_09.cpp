//https://codeforces.com/contest/2009/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int a, b, ans; cin >> a >> b;
        int cnt = INT_MAX;
        for(int i = a; i <= b; i++){
            ans = (i - a) + (b - i);
            if(ans < cnt){
                cnt = ans;
            }
        }
        cout << cnt << endl;
        
    }
    return 0;
}

//Submission link: https://codeforces.com/contest/2009/submission/341871589