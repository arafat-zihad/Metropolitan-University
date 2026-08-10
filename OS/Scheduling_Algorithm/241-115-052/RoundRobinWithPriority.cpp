// Round Robin with priority

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int quantum;
    cout << "Enter Time Quantum: ";
    cin >> quantum;

    int p[n], at[n], bt[n], priority[n];
    int rt[n]; 
    int ct[n], tat[n], wt[n];

    cout << "\nEnter Process ID, Arrival Time, Burst Time and Priority:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i] >> priority[i];

        rt[i] = bt[i];

        ct[i] = 0;
        tat[i] = 0;
        wt[i] = 0;
    }

    int time = 0;
    int done = 0;

    while (done < n)
    {
        int highestPriority = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (at[i] <= time && rt[i] > 0)
            {
                if (priority[i] < highestPriority)
                {
                    highestPriority = priority[i];
                }
            }
        }

        if (highestPriority == INT_MAX)
        {
            time++;
            continue;
        }

        int idx = -1;

        for (int i = 0; i < n; i++)
        {
            if (at[i] <= time &&
                rt[i] > 0 &&
                priority[i] == highestPriority)
            {
                idx = i;
                break;
            }
        }

        int executionTime = min(quantum, rt[idx]);

        rt[idx] -= executionTime;
        time += executionTime;


        if (rt[idx] == 0)
        {
            done++;
            ct[idx] = time;
            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];
        }
    }

    cout << "\nP\tAT\tBT\tPriority\tCT\tTAT\tWT\n";

    for (int i = 0; i < n; i++)
    {
        cout << "P" << p[i]
             << "\t" << at[i]
             << "\t" << bt[i]
             << "\t" << priority[i]
             << "\t\t" << ct[i]
             << "\t" << tat[i]
             << "\t" << wt[i]
             << endl;
    }

    return 0;
}