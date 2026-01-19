// https://codeforces.com/contest/1829/problem/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        int cnt = 0,bnt = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                cnt++;
                if(cnt > bnt) {
                    bnt = cnt;
                }
            }
            else {
                cnt = 0;
            }
        }
        cout << bnt << endl;
    }
 
    return 0;
}
 