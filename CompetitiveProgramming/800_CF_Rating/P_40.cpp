//https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int x = 0;
    // vector<int>v;
    string arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == "++X" || arr[i] == "X++"){
            x++;
        } else x--;
    }
    
    cout << x << endl;
    return 0;
}