#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Number of processes and resources
    int n, m;

    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter number of resources: ";
    cin >> m;

    // Arrays
    int allocation[n][m];
    int maximum[n][m];
    int need[n][m];
    int available[m];

    // Input Allocation Matrix
    cout << "\nEnter Allocation Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> allocation[i][j];
        }
    }

    // Input Maximum Matrix
    cout << "\nEnter Maximum Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maximum[i][j];
        }
    }

    // Input Available Resources
    cout << "\nEnter Available Resources:\n";
    for (int j = 0; j < m; j++)
    {
        cin >> available[j];
    }

    // -----------------------------
    // Calculate Need Matrix
    // Need = Maximum - Allocation
    // -----------------------------
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            need[i][j] = maximum[i][j] - allocation[i][j];
        }
    }

    // Work array
    int work[m]; //focus

    for (int j = 0; j < m; j++)
    {
        work[j] = available[j];
    }

    // Finish array
    bool finish[n]; //focus

    for (int i = 0; i < n; i++)
    {
        finish[i] = false;
    }

    // Safe sequence
    int safeSequence[n]; //focus
    int count = 0;

    // -----------------------------
    // Banker's Algorithm
    // -----------------------------
    while (count < n)
    {
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (finish[i] == false)
            {
                bool possible = true;

                // Check Need <= Work
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
                    // Release allocated resources
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

        // No process can execute
        if (found == false)
        {
            break;
        }
    }

    // -----------------------------
    // Display Result
    // -----------------------------
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