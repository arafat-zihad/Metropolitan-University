/*
Question 1: Basic Vector Input and Output
Write a program that:

Creates a vector of integers.
Takes 5 numbers as input from the user.
Prints the elements using a loop.
Goal: Learn how to declare, input, and iterate over a vector.
*/

#include <bits/stdc++.h>
using namespace std;

void print(int v[]){
    for(int i = 0; i < 5; i++){
        cout << v[i] << " ";
    }
}

int main(){
    vector<int>v(5);
    for(int i = 0; i < 5; i++){
        cin >> v[i];
    }
    print(v.data());
    return 0;
}