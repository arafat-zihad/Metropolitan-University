//https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n;
    vector <string> v;
    for(int i = 1; i <= n ; i ++){
        if(i % 2 != 0){
            v.push_back("I hate ");
        }
        else if (i % 2 == 0){
            v.push_back("I love ");
        }

        if(i == n){
            v.push_back(" it");
        }
        else {
            v.push_back(" that");
        }
    }

    for(int i = 0; i < (int)v.size(); i++){
        cout << v[i];
    }
    cout << endl;
    return 0;
}