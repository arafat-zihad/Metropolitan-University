// https://codeforces.com/contest/1703/problem/A
#include<iostream>
using namespace std;
 
int main()
{
    
    int t;
    cin >> t;
 
    for(int i = 0; i < t; i++)
    {
        string s;
    cin >> s;
        if((s[0] == 'y' || s[0] == 'Y') &&
                (s[1] =='e' || s[1] == 'E') &&
                (s[2] =='s' || s[2]=='S'))
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
