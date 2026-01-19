//https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){
            if(v[j]== i+1){
                cout << j+1 << endl;
            }
        }
    }
    return 0;
}