//https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x, y;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int val;
            cin >> val;
            if (val == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x - 3) + abs(y - 3) << "\n";
    return 0;
}