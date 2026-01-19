/*
Question 2: Vector Operations

Write a program that:
Initializes a vector with {10, 20, 30, 40, 50}.
Adds 60 at the end.
Removes the last element.
Inserts 15 at the second position.
Prints the final vector.

Goal: Practice push_back, pop_back, insert, and indexing.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {10, 20, 30, 40, 50};
    v.push_back(60);
    v.pop_back();
    v.insert(v.begin()+2, 15);

    for(int x: v){
        cout << x << " ";
    }
    return 0;
}