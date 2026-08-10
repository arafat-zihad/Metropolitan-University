#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int p[n], at[n], bt[n], priority[n];
    int ct[n], tat[n], wt[n];
    bool completed[n];

    cout << "\nEnter Process ID, Arrival Time, Burst Time and Priority:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i] >> priority[i];
        completed[i] = false;
    }

    int time = 0;
    int done = 0;

    while (done < n)
    {
        int idx = -1;
        int highestPriority = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (at[i] <= time && completed[i] == false)
            {
                if (priority[i] < highestPriority)
                {
                    highestPriority = priority[i];
                    idx = i;
                }
                else if (priority[i] == highestPriority)
                {
                    if (at[i] < at[idx])
                    {
                        idx = i;
                    }
                }
            }
        }

        if (idx == -1)
        {
            time++;
            continue;
        }

        time += bt[idx];

        ct[idx] = time;
        tat[idx] = ct[idx] - at[idx];
        wt[idx] = tat[idx] - bt[idx];

        completed[idx] = true;
        done++;
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