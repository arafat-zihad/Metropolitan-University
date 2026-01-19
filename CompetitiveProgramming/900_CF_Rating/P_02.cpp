//https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<>());

    int total_sum = 0;
    for(int i = 0; i < n; i++){
        total_sum += v[i];
    }

    int sum = 0;
    int coin = 0;

    for(int i = 0; i < n; i++){
        sum += v[i];
        coin++;
        if(sum > total_sum/2)
        break;
    }

    cout<< coin << endl;


    return 0;
}