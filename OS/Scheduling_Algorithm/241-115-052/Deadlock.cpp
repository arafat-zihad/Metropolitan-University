// Deadlock
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter number of resources: ";
    cin >> m;

    int allocation[n][m];
    int maximum[n][m];
    int need[n][m];
    int available[m];

    cout << "\nEnter Allocation Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> allocation[i][j];
        }
    }

    cout << "\nEnter Maximum Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maximum[i][j];
        }
    }

    cout << "\nEnter Available Resources:\n";
    for (int j = 0; j < m; j++)
    {
        cin >> available[j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            need[i][j] = maximum[i][j] - allocation[i][j];
        }
    }

    int work[m]; 

    for (int j = 0; j < m; j++)
    {
        work[j] = available[j];
    }

    bool finish[n]; 

    for (int i = 0; i < n; i++)
    {
        finish[i] = false;
    }

    int safeSequence[n]; 
    int count = 0;

    while (count < n)
    {
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (finish[i] == false)
            {
                bool possible = true;

                for (int j = 0; j < m; j++)
                {
                    if (need[i][j] > work[j])
                    {
                        possible = false;
                        break;
                    }
                }

                if (possible)
                {
                    for (int j = 0; j < m; j++)
                    {
                        work[j] += allocation[i][j];
                    }

                    finish[i] = true;
                    safeSequence[count] = i;
                    count++;
                    found = true;
                }
            }
        }
        if (found == false)
        {
            break;
        }
    }

    if (count == n)
    {
        cout << "\nSystem is in SAFE state.\n";
        cout << "Safe Sequence: ";

        for (int i = 0; i < n; i++)
        {
            cout << "P" << safeSequence[i];

            if (i != n - 1)
                cout << " -> ";
        }

        cout << endl;
    }
    else
    {
        cout << "\nSystem is in UNSAFE state.\n";
    }

    return 0;
}