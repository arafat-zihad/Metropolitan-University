//https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b; 
    int cnt = 0;
    while (1)
    {
        a *= 3;
        b *= 2;
        cnt++;
        if(a > b){
            cout << cnt << endl;
            break;
        }
    }
    
    return 0;
}