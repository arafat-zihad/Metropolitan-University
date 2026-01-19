// https://codeforces.com/contest/200/problem/B
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    
    double sum = 0.0; 
    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    
    double ans = (sum / n); 
    
    cout << fixed << setprecision(12) << ans << endl;
    
    return 0;
}