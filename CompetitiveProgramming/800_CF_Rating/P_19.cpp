// https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cntU = 0;
    int cntL = 0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] > 64 && s[i] < 97)
        {
            cntU++;
        }
        else
        {
            cntL++;
        }
    }

    string lower = s;
    for (size_t i = 0; i < lower.size(); i++)
    {
        if (lower[i] >= 'A' && lower[i] <= 'Z')
        {
            lower[i] += 32;
        }
    }

    string upper = s;
    for (size_t i = 0; i < upper.size(); i++)
    {
        if (upper[i] >= 'a' && upper[i] <= 'z')
        {
            upper[i] -= 32;
        }
    }

    string res;
    if (cntU > cntL)
    {
        res = upper;
        cout << res << endl;
    }
    else if (cntL > cntU)
    {
        res= lower;
        cout << res << endl;
    }
    else
    {
        res = lower;
        cout << res << endl;
    }
    

    return 0;
}