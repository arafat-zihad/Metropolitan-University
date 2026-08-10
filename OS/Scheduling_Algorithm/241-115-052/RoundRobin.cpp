//Round Robin
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int tq;
    cout << "Enter Time Quantum: ";
    cin >> tq;

    int p[n], at[n], bt[n];
    int rt[n], ct[n], tat[n], wt[n];

    cout << "\nEnter Process ID, Arrival Time and Burst Time:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i];

        rt[i] = bt[i];
    }

    queue<int> q;

    int time = 0;
    int completed = 0;
    int next = 0;

    q.push(0);
    next = 1;

    while (!q.empty())
    {
        int i = q.front();
        q.pop();

        if (rt[i] > tq)
        {
            time += tq;  
            rt[i] -= tq; 
        }
        else
        {
            time += rt[i]; 
            rt[i] = 0;     
            ct[i] = time;
            tat[i] = ct[i] - at[i];
            wt[i] = tat[i] - bt[i];

            completed++;
        }

        while (next < n && at[next] <= time) 
        {
            q.push(next);
            next++;
        }

        if (rt[i] > 0)
        {
            q.push(i);
        }

        if (q.empty() && next < n)
        {
            time = at[next];
            q.push(next);
            next++;
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