/*
https://codeforces.com/problemset/problem/281/A

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
Input
ApPLe

Output
ApPLe
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    for(size_t i = 0; i <= s.size(); i++){
        if(s[0] >= 97 && s[0] <= 122){
            s[0] = s[0] - 32;
            cout << s << endl;
            break;
        }
        else{
            cout << s << endl;
            break;
        }
    }

    return 0;
}

