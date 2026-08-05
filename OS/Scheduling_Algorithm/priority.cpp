#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Number of processes
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    // Arrays
    int p[n], at[n], bt[n], pr[n];
    int rt[n], ct[n], tat[n], wt[n];

    cout << "\nEnter Process ID, Arrival Time, Burst Time and Priority:\n";

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i] >> pr[i];

        // Initially Remaining Time = Burst Time
        rt[i] = bt[i];
    }

    int completed = 0;
    int time = 0;

    // Continue until every process finishes
    while (completed < n)
    {
        // Index of selected process
        int idx = -1;

        // Lowest priority value found
        int highestPriority = INT_MAX;

        // -----------------------------
        // Find the highest priority process
        // among the arrived processes
        // -----------------------------
        for (int i = 0; i < n; i++)
        {
            // Process must have arrived
            // and must not be completed
            if (at[i] <= time && rt[i] > 0)
            {
                // Smaller priority value means higher priority
                if (pr[i] < highestPriority)
                {
                    highestPriority = pr[i];
                    idx = i;
                }

                // If priority is same,
                // choose earlier arrival time
                else if (pr[i] == highestPriority)
                {
                    if (at[i] < at[idx])
                    {
                        idx = i;
                    }
                }
            }
        }

        // -----------------------------
        // No process has arrived yet
        // CPU remains idle
        // -----------------------------
        if (idx == -1)
        {
            time++;
            continue;
        }

        // -----------------------------
        // Execute selected process
        // for only ONE unit of time
        // (Preemptive Scheduling)
        // -----------------------------
        rt[idx]--;
        time++;

        // -----------------------------
        // If process finishes
        // -----------------------------
        if (rt[idx] == 0)
        {
            ct[idx] = time;
            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];

            completed++;
        }
    }

    // -----------------------------
    // Display Result
    // -----------------------------
    cout << "\nP\tAT\tBT\tPR\tCT\tTAT\tWT\n";

    for (int i = 0; i < n; i++)
    {
        cout << "P" << p[i]
             << "\t" << at[i]
             << "\t" << bt[i]
             << "\t" << pr[i]
             << "\t" << ct[i]
             << "\t" << tat[i]
             << "\t" << wt[i]
             << endl;
    }

    return 0;
}