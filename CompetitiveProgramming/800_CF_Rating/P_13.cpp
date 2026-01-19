//https://codeforces.com/contest/1791/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
        bool lucky = true;

    while (t--)
    {
        char a;
        cin >> a;
        string b = "codeforces";
        for (size_t i = 0; i < b.length(); i++)
        {
            if (b[i] == a)
            {
                // cout << "YES" << endl;
                lucky = true;
                break;
            }
            else{
                lucky = false;
            }
        }
        if(lucky)cout << "YES" << endl;
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}