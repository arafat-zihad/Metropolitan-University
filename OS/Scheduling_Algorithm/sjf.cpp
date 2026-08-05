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

    // Keeps track of whether a process has finished
    bool completed[n];

    cout << "\nEnter Process ID, Arrival Time and Burst Time:\n";

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i];
        completed[i] = false;
    }

    // Current CPU time
    int time = 0;

    // Number of completed processes
    int done = 0;

    // Continue until all processes finish
    while (done < n)
    {
        // Index of selected process
        int idx = -1;

        // Smallest Burst Time found
        int shortestBT = INT_MAX;

        // -----------------------------
        // Find the shortest job among
        // the processes that have arrived
        // -----------------------------
        for (int i = 0; i < n; i++)
        {
            // Process has arrived and is not completed
            if (at[i] <= time && completed[i] == false)
            {
                // Choose process with shortest burst time
                if (bt[i] < shortestBT)
                {
                    shortestBT = bt[i];
                    idx = i;
                }

                // If Burst Time is same,
                // choose earlier Arrival Time
                else if (bt[i] == shortestBT)
                {
                    if (at[i] < at[idx])
                    {
                        idx = i;
                    }
                }
            }
        }

        // -----------------------------
        // If no process has arrived,
        // CPU remains idle
        // -----------------------------
        if (idx == -1)
        {
            time++;
            continue;
        }

        // -----------------------------
        // Execute selected process
        // completely
        // -----------------------------
        time += bt[idx];

        // Completion Time
        ct[idx] = time;

        // Turnaround Time = CT - AT
        tat[idx] = ct[idx] - at[idx];

        // Waiting Time = TAT - BT
        wt[idx] = tat[idx] - bt[idx];

        // Mark process as completed
        completed[idx] = true;

        done++;
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