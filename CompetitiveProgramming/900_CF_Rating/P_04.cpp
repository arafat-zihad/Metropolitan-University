//https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long>arr(n);
    vector<long long>brr(n);


    int idx = 0, idxx =0;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            arr[idx++] = i;
        }
         else {
            brr[idxx++] = i;
        }
    }
    vector<long long>crr(idx+idxx);

    for (int i = 0; i < idx; i++) {
        crr[i] = arr[i];
    }

    for (int i = 0; i < idxx; i++) {
        crr[idx + i] = brr[i];
    }
    int m = idx +idxx;
    for (int i = 0; i < m; i++) {
        if(crr[i] == k){
            cout << crr[k-1] << endl;
        }

    }
    return 0;
}