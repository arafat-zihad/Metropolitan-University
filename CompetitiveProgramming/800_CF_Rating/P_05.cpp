//https://codeforces.com/contest/2044/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int cnt = 0;
        // int arr[n];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i + j == n){
                    cnt++;
                    
                }
            }
            
        }
        cout << cnt << endl;
    }
    return 0;
}