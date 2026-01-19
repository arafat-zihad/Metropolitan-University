// https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int diff = INT_MAX;
    for (int i = 0; i + n - 1 < m; i++)
    {
        diff = min(diff, v[i + n - 1] - v[i]);
    }
    cout << diff << endl;
    return 0;
}