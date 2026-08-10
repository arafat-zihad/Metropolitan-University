// FCFS
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Number of processes
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    // Arrays
    int p[n], at[n], bt[n];
    int ct[n], tat[n], wt[n];

    cout << "\nEnter Process ID, Arrival Time and Burst Time:\n";

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i];
    }

    // -----------------------------
    // Sort processes by Arrival Time
    // -----------------------------
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (at[i] > at[j])
            {
                swap(at[i], at[j]);
                swap(bt[i], bt[j]);
                swap(p[i], p[j]);
            }
        }
    }

    // Current CPU time
    int time = 0;

    // -----------------------------
    // Execute processes one by one
    // in FCFS order
    // -----------------------------
    for (int i = 0; i < n; i++)
    {
        // If CPU is idle
        if (time < at[i])
        {
            time = at[i];
        }

        // Execute process completely
        time += bt[i];

        // Completion Time
        ct[i] = time;

        // Turnaround Time = CT - AT
        tat[i] = ct[i] - at[i];

        // Waiting Time = TAT - BT
        wt[i] = tat[i] - bt[i];
    }

    // -----------------------------
    // Display Result
    // -----------------------------
    cout << "\nP\tAT\tBT\tCT\tTAT\tWT\n";

    for (int i = 0; i < n; i++)
    {
        cout << "P" << p[i]
             << "\t" << at[i]
             << "\t" << bt[i]
             << "\t" << ct[i]
             << "\t" << tat[i]
             << "\t" << wt[i]
             << endl;
    }

    return 0;
}