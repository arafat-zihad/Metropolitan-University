// SRTF
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int p[n], at[n], bt[n];
    int rt[n], ct[n], tat[n], wt[n];

    bool completed[n];

    cout << "\nEnter Process ID, Arrival Time and Burst Time:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i];

        rt[i] = bt[i]; 
        completed[i] = false;
    }

    int time = 0;

    int done = 0;

    while (done < n)
    {
        int idx = -1;
        int shortestRT = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (at[i] <= time && completed[i] == false)
            {
                if (rt[i] < shortestRT)
                {
                    shortestRT = rt[i];
                    idx = i;
                }
                else if (rt[i] == shortestRT)
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

        rt[idx]--;
        time++;

        if (rt[idx] == 0)
        {
            completed[idx] = true;
            done++;

            ct[idx] = time;
            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];
        }
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