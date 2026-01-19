// https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] += 32;
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (b[i] >= 65 && b[i] <= 90)
        {
            b[i] += 32;
        }
    }
    
    int zero = 0, minus = 0, plus = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            // zero = 1;
            // cout << "0" << endl;
            // zero = 0;
            continue;
        }

        else if (a[i] < b[i])
        {
            minus = 2;
            // cout << "-1" << endl;
            break;
        }

        else if (a[i] > b[i])
        {   
            plus = 3;
            // cout << "1" << endl;
            break;
        }
    }

    


    if(minus == 2){
        cout << "-1" << endl;
    } else if(plus == 3) {
        cout << "1" << endl;
    } else cout << "0" << endl;
    return 0;
}