//https://codeforces.com/contest/2166/problem/A
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char last = s[n - 1];
        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != last) cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}
