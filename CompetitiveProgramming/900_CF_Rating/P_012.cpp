//https://codeforces.com/problemset/problem/474/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    char d;
    string s;
    cin >> d >> s;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < keyboard.size(); j++) {
            if (keyboard[j] == s[i]) {
                if (d == 'R') cout << keyboard[j - 1];
                else cout << keyboard[j + 1];
                break;
            }
        }
    }
    cout << endl;
    return 0;
}
