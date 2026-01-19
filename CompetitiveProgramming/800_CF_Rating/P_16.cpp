// https://codeforces.com/contest/1722/problem/A
// NOt solved
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool c = 0;
        string s; cin >> s;

        for (int i = 0; i < n; i++)
        {   
            if(n != 5 || s == "TIMUR" ){
                c = 0;
                // break;
            }

            if (s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r')
            {

                c = 1;
            }

        }
            if (c == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        
        return 0;
    }
}