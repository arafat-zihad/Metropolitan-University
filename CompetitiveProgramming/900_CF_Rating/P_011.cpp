//https://codeforces.com/problemset/problem/34/B

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int sum = 0;
    for(int i = 0; i < m; i++){
        if(v[i] <= 0){
        sum += v[i];
        }
    }
    cout << abs(sum) << endl;
    
    return 0;
}