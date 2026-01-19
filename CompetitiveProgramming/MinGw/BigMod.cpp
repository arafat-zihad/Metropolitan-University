// what is base^power modulo m?

#include <bits/stdc++.h>
using namespace std;
int big_mod(int base, int power, int mod)
{
    if (power == 0)
    {
        return 1;
    }
    else if (power % 2 == 0)
    {
        int p1 = (big_mod(base, power / 2, mod) % mod);
        return (p1 * p1) % mod;
    }
    else
    {
        int p1 = base % mod;
        int p2 = (big_mod(base, power - 1, mod)) % mod;
        return (p1 * p2) % mod;
    }
}
int main()
{
    int base, power, mod;
    cin >> base >> power >> mod;
    cout << big_mod(base, power, mod);
    return 0;
}

// INPUT: 2 30 11
// OUTPUT: 1



/*
what is this big number modulo m?

#include <bits/stdc++.h>
using namespace std;
int big_mod(string num, int mod){
    int res = 0;
    for(int i  = 0; i < num.size(); i++){
        res = ( res * 10 + num[i] - '0') % mod;
    }
    return res;
}

int main(){
    string num;
    int mod;
    cin >> num >> mod;
    cout << big_mod(num,mod);
    return 0;
}

//INPUT: 12316767678678
//OUTPUT: 8
*/




/*
Problem 1: Compute a^b % m
#include <bits/stdc++.h>
using namespace std;

long long bigmod(long long a, long long b, long long m) {
    long long result = 1 % m;
    a %= m;

    while (b > 0) {
        if (b & 1) result = (result * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return result;
}

int main() {
    long long a, b, m;
    cin >> a >> b >> m;
    cout << bigmod(a, b, m) << endl;
    return 0;
}

Problem 1:
2 10 1000
Output: 24



Problem 2: Last Digit of a^b

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long mod = 10;
    long long result = 1;
    a %= mod;

    while (b > 0) {
        if (b & 1) result = (result * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }

    cout << result << endl;
    return 0;
}

Problem 2:
7 256
Output: 9




Problem 3: Check if a^b divisible by m

#include <bits/stdc++.h>
using namespace std;

long long bigmod(long long a, long long b, long long m) {
    long long res = 1 % m;
    a %= m;

    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int main() {
    long long a, b, m;
    cin >> a >> b >> m;
    if (bigmod(a, b, m) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

Problem 3:
3 6 9
Output: YES




Problem 4: Compute (a*b)^c % m
#include <bits/stdc++.h>
using namespace std;

long long bigmod(long long a, long long b, long long m) {
    long long res = 1 % m;
    a %= m;

    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int main() {
    long long a, b, c, m;
    cin >> a >> b >> c >> m;
    long long prod = (a % m) * (b % m) % m;
    cout << bigmod(prod, c, m) << endl;
    return 0;
}

Problem 4:
2 3 4 100
Output: 96




Problem 5: Sum of Powers (a^1 + a^2 + ... + a^n) % m
#include <bits/stdc++.h>
using namespace std;

long long bigmod(long long a, long long b, long long m) {
    long long res = 1 % m;
    a %= m;

    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int main() {
    long long a, n, m;
    cin >> a >> n >> m;

    long long sum = 0;
    for (long long i = 1; i <= n; i++) {
        sum = (sum + bigmod(a, i, m)) % m;
    }

    cout << sum << endl;
    return 0;
}

Problem 5:
2 5 100
Output: 62


*/
