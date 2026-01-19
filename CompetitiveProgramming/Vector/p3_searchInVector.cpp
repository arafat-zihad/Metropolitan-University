/*
Search in a Vector

Write a function that takes a vector of integers and a number x, and
returns whether x is present in the vector or not.
Goal: Understand linear search using vectors and function
implementation.
*/

#include <bits/stdc++.h>
using namespace std;

void search(const vector<int>& v, int n){
    for(size_t i = 0; i <v.size(); i++){
        if(v[i] == n){
            cout << "Found " << endl;
            return;
        }

    }
    cout << "Not found " << endl;
}
int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout<<"Enter the value to search: ";
    int x; cin >> x;
    search(v, x);
    return 0;
}