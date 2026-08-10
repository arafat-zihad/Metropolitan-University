// Multilevel queue

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    int p[n], at[n], bt[n], queueNo[n];
    int rt[n], ct[n], tat[n], wt[n];
    bool completed[n];

    int quantum;

    cout << "Enter Time Quantum for Queue 1: ";
    cin >> quantum;

    cout << "\nEnter Process ID, Arrival Time, Burst Time and Queue Number:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i] >> queueNo[i];

        rt[i] = bt[i];
        completed[i] = false;
    }

    int time = 0;
    int done = 0;

    while (done < n)
    {
        int idx = -1;

        for (int i = 0; i < n; i++)
        {
            if (at[i] <= time &&
                completed[i] == false &&
                queueNo[i] == 1)
            {
                idx = i;
                break;
            }
        }

        if (idx != -1)
        {
            int executionTime = min(quantum, rt[idx]);

            rt[idx] -= executionTime;
            time += executionTime;

            if (rt[idx] == 0)
            {
                completed[idx] = true;
                done++;

                ct[idx] = time;
                tat[idx] = ct[idx] - at[idx];
                wt[idx] = tat[idx] - bt[idx];
            }

            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (at[i] <= time &&
                completed[i] == false &&
                queueNo[i] == 2)
            {
                idx = i;
                break;
            }
        }

        if (idx != -1)
        {
            time += bt[idx];

            rt[idx] = 0;
            completed[idx] = true;
            done++;

            ct[idx] = time;
            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];

            continue;
        }

        time++;
    }

    cout << "\nP\tAT\tBT\tQueue\tCT\tTAT\tWT\n";

    for (int i = 0; i < n; i++)
    {
        cout << "P" << p[i]
             << "\t" << at[i]
             << "\t" << bt[i]
             << "\t" << queueNo[i]
             << "\t" << ct[i]
             << "\t" << tat[i]
             << "\t" << wt[i]
             << endl;
    }

    return 0;
}