// Multi level feedback Multilevel queue

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    int p[n], at[n], bt[n];
    int rt[n], ct[n], tat[n], wt[n];
    int level[n];
    bool completed[n];

    int quantum1 = 2;
    int quantum2 = 4;

    cout << "\nEnter Process ID, Arrival Time and Burst Time:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i];

        rt[i] = bt[i];
        level[i] = 1;
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
                level[i] == 1)
            {
                idx = i;
                break;
            }
        }

        if (idx != -1)
        {
            int executionTime = min(quantum1, rt[idx]);

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
            else
            {
                level[idx] = 2;
            }

            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (at[i] <= time &&
                completed[i] == false &&
                level[i] == 2)
            {
                idx = i;
                break;
            }
        }

        if (idx != -1)
        {
            int executionTime = min(quantum2, rt[idx]);

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
            else
            {
                level[idx] = 3;
            }

            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (at[i] <= time &&
                completed[i] == false &&
                level[i] == 3)
            {
                idx = i;
                break;
            }
        }

        if (idx != -1)
        {
            time += rt[idx];

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