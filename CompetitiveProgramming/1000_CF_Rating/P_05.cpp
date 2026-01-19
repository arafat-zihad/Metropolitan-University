//https://codeforces.com/problemset/problem/450/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int last = 0;
    for (int i = 0; i < n; i++) {
        // how many turns each child needs
        int turns = (a[i] + m - 1) / m; 
        if (turns >= (a[last] + m - 1) / m) {
            last = i; 
        }
    }
    cout << last + 1 << endl;
    return 0;
}
