// // https://codeforces.com/problemset/problem/236/A
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string n;
//     cin >> n;

//     string s = "";
//     int cnt = 0;
//     for (size_t i = 0; i < n.size(); i++)
//     {
//         bool found = 0;
//         for (size_t j = 0; j < n.size(); j++)
//         {
//             if (n[i] == s[i])
//             {
//                 found = 1;
//                 break;
//             }
//         }
//         if(!found){
//             s += n[i];
//             cnt++;
//         }
//     }
//     // cout << s;
//     if(cnt % 2 == 0){
//         cout << "CHAT WITH HER!";
//     } else {
//         cout << "IGNORE HIM!";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;

    string s = "";
    int cnt = 0;

    for (size_t i = 0; i < n.size(); i++) {
        bool found = false;
        for (size_t j = 0; j < s.size(); j++) { // loop over s, not n
            if (n[i] == s[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            s += n[i];
            cnt++;
        }
    }

    if (cnt % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}
