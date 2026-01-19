// https://codeforces.com/problemset/problem/466/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a, b; cin >> n >> m >> a >> b;
    int total = 0;

    for (int i = 0; n > 0; i++)
    {
        if(n >= m){
            total += b;
        }
        else{
            total += a;
        }
        n -= m;
    }
    
    // if((m +1) * b < total){
    //     cout << (m +1) * b << endl; 
    // } else {
    cout << total <<endl;
    // }
    
    return 0;
}