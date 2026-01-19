// // https://codeforces.com/problemset/problem/1560/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
        
        for (int i = 1; ; i++) {
			if (i % 3 == 0 || i % 10 == 3){
                continue;
            }
            n--;
			if (n == 0) {
				cout << i << endl;
				break;
			}
		}
	}
}