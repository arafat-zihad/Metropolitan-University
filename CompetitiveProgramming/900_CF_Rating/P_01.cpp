// https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int zero = 0, one = 0;
    bool flag = 0;

    for (size_t i = 0; i < s.size(); i++)
    {

        if (s[i] == 48)
        {
            zero++;
            if (zero >= 7)
            {
                flag = true;
                break;
            }
        }
        else
        {
            zero = 0;
        }
    }

    for (size_t i = 0; i < s.size(); i++)
    {

        if (s[i] == 49)
        {
            one++;
            if (one >= 7)
            {
                flag = true;
                break;
            }
        }
        else
        {
            one = 0;
        }
    }

    if (flag == true)
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}