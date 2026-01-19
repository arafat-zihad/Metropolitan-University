/*
Question 4: Sort a Vector

Write a program to:

Take n numbers from the user and store them in a vector.
Sort the vector in ascending order using sort() from <algorithm>.
Display the sorted vector.
Goal: Use STL sorting with vectors.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>v(n);
    for(size_t i= 0; i < v.size(); i++){
        cin >> v[i];
    }

    //Ascending Order
    sort(v.begin(), v.end());


    //Decending Order
    // sort(v.begin(), v.end(), greater<>());

    for(size_t i= 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}