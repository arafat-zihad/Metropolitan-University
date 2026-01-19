// how many subarrays have sum = 0

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long prefix = 0;
    long long countZeroSum = 0;

    unordered_map<long long, long long> freq;

    freq[0] = 1;  // prefix sum 0 exists before starting

    for (int i = 0; i < n; i++) {
        prefix += a[i];

        // If this prefix sum occurred before, then some subarray sums to 0
        countZeroSum += freq[prefix];

        // increase frequency
        freq[prefix]++;
    }

    cout << countZeroSum << endl;
}

/*
5
2 -2 3 -3 4

output : 3
*/



    
//Task: Subarray sum queries 

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];

    int pre[n+1];
    pre[0]=ar[0];

    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+ar[i];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==0)cout<<pre[r]<<endl;
        else cout<<pre[r]-pre[l-1]<<endl;
    }
}

Input:
5
1 2 3 4 5
3
0 0
1 3
0 4

Output:
1
9
15
*/





//Task: Count number of subarrays whose sum is�exactly�K

/*

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long prefix = 0, ans = 0;
    unordered_map<long long, long long> freq;

    freq[0] = 1;

    for (int x : a) {
        prefix += x;

        ans += freq[prefix - k];

        freq[prefix]++;
    }

    cout << ans << endl;
}

 input : 6 5
       1 2 3 2 -1 2
*/



