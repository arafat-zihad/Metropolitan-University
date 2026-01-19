// https://codeforces.com/problemset/problem/486/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    int sum = 0;
    if(n % 2 == 0){
        cout << n / 2 << endl;
    } else {
        cout << -(n+1)/2 << endl;
    }
    return 0;
}