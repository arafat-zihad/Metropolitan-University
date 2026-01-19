/*
Question 5: 2D Vector Matrix

Create a 3x3 matrix using a 2D vector and:
Take input from the user.
Print the matrix in matrix format.

Goal: Learn how to declare and work with 2D vectors.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;

    vector<vector<int>>arr(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cout <<"The matrix is: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}