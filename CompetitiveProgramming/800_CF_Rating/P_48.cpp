// https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    
    int cnt = 0;

    for(int i = 0; i <4; i++){
        if(v[i] == v[i+1] || v[i] == v[i+2] || v[i] == v[i+3]){
                cnt++;
        }
    }

    cout << cnt << endl;

    
    return 0;
}
