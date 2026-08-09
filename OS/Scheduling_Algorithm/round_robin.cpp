#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Number of processes
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    // Time Quantum
    int tq;
    cout << "Enter Time Quantum: ";
    cin >> tq;

    // Dynamic arrays (size depends on n)
    int p[n], at[n], bt[n];
    int rt[n], ct[n], tat[n], wt[n];

    cout << "\nEnter Process ID, Arrival Time and Burst Time:\n";

    // Input process information
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i];

        // Initially Remaining Time = Burst Time
        rt[i] = bt[i];
    }

    // Queue stores the index of ready processes
    queue<int> q;

    // Current CPU time
    int time = 0;

    // Number of completed processes
    int completed = 0;

    // Points to the next process that has not entered the queue yet
    int next = 0;

    // -----------------------------
    // Add the first process to queue
    // -----------------------------
    q.push(0);
    next = 1;

    // Continue until Ready Queue becomes empty
    while (!q.empty())
    {
        // Get first process from queue
        int i = q.front();
        q.pop();

        // -----------------------------
        // If remaining time is greater than Time Quantum
        // Process will run only for Time Quantum
        // -----------------------------
        if (rt[i] > tq)
        {
            time += tq;  // CPU executes for tq units
            rt[i] -= tq; // Remaining time decreases
        }
        else
        {
            // -----------------------------
            // Process finishes execution
            // -----------------------------

            time += rt[i]; // Execute remaining time
            rt[i] = 0;     // No remaining time left

            // Completion Time
            ct[i] = time;

            // Turnaround Time = CT - AT
            tat[i] = ct[i] - at[i];

            // Waiting Time = TAT - BT
            wt[i] = tat[i] - bt[i];

            completed++;
        }

        // ---------------------------------------------------
        // Add newly arrived processes into Ready Queue
        // ---------------------------------------------------
        while (next < n && at[next] <= time) //w i i 
        {
            q.push(next);
            next++;
        }

        // ---------------------------------------------------
        // If current process is not finished,
        // place it at the end of the queue
        // ---------------------------------------------------
        if (rt[i] > 0)
        {
            q.push(i);
        }

        // ---------------------------------------------------
        // If queue becomes empty but processes are still left,
        // CPU remains idle until next process arrives.
        // ---------------------------------------------------
        if (q.empty() && next < n)
        {
            time = at[next];
            q.push(next);
            next++;
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