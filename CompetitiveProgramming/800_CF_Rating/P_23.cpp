// https://codeforces.com/problemset/problem/677/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, h; cin >> n >> h;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > h){
            float o = (float)arr[i]/h;
            cnt += ceil(o);
            // cout << cnt << " ";
        }
        else {
            cnt++; 
        }


        
    }
    cout << cnt << endl;
    return 0;
}