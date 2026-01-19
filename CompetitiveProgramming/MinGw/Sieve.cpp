//Problem: Print all prime numbers up to N

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<bool> isPrime(N+1, true);

    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    for (int i = 2; i*i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i*i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    // Print all primes
    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i]) cout << i << " ";
    }
    cout << endl;

    return 0;
}





/*
1. Optimized Sieve (Skip Even Numbers)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    vector<bool> isPrime(N+1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 4; i <= N; i += 2) isPrime[i] = false; // Mark even numbers

    for (int i = 3; i*i <= N; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i*i; j <= N; j += i*2)   // Skip even multiples
            {
                isPrime[j] = false;
            }
        }
    }

    cout << 2 << " "; // print 2 separately
    for (int i = 3; i <= N; i += 2)
    {
        if (isPrime[i]) cout << i << " ";
    }
    cout << endl;

    return 0;
}
    
Sample Input / Output
Input: 20
Output:
2 3 5 7 11 13 17 19
*/



/*
2. Sum of Primes up to N
Sometimes you need the sum of all primes ≤ N.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<bool> isPrime(N+1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i*i <= N; i++)
        if (isPrime[i])
            for (int j = i*i; j <= N; j += i)
                isPrime[j] = false;

    long long sum = 0;
    for (int i = 2; i <= N; i++)
        if (isPrime[i]) sum += i;

    cout << "Sum of primes <= " << N << " is: " << sum << endl;
}
Sample Input / Output
Input: 20
Output: 77



3. Check if a Number is Prime (Using Sieve Array)
After building a sieve, you can instantly check primality.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 1000000;
    // Initialize sieve array
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;
    // Build sieve
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= N; j += i)
                isPrime[j] = false;
        }
    }
    // User input
    int x;
    cin >> x;
    // Check primality using sieve
    if (x >= 0 && x <= N)
    {
        if (isPrime[x])
            cout << x << " is prime"<<endl;
        else
            cout << x << " is not prime"<<endl;
    }
    else
    {
        cout << "Number out of range (0 to " << N << ")"<<endl;
    }
    return 0;
}
Sample Input / Output
Input: 17
Output: 17 is prime


*/




