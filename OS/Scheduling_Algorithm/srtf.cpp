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
    int rt[n], ct[n], tat[n], wt[n];

    // Keeps track of whether a process has finished
    bool completed[n];

    cout << "\nEnter Process ID, Arrival Time and Burst Time:\n";

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i];

        rt[i] = bt[i]; // Initially remaining time = burst time
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

        // Smallest Remaining Time found
        int shortestRT = INT_MAX;

        // -----------------------------
        // Find process with shortest
        // remaining time
        // -----------------------------
        for (int i = 0; i < n; i++)
        {
            // Process has arrived and is not completed
            if (at[i] <= time && completed[i] == false)
            {
                if (rt[i] < shortestRT)
                {
                    shortestRT = rt[i];
                    idx = i;
                }

                // If Remaining Time is same,
                // choose earlier Arrival Time
                else if (rt[i] == shortestRT)
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
        // for only 1 unit
        // -----------------------------
        rt[idx]--;
        time++;

        // -----------------------------
        // If process finishes
        // -----------------------------
        if (rt[idx] == 0)
        {
            completed[idx] = true;
            done++;

            ct[idx] = time;
            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];
        }
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