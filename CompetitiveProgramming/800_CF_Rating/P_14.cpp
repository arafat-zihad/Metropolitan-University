
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int x, n;
        cin >> x >> n;
        int add = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 != 0){
                add += x; 
                
            }
            else{ 
                add += (-x);
            }
        }
        cout << abs(add) << endl;
    }
    return 0;
}