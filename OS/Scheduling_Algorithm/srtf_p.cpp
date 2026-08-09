// count: 1, 2, 3, 4

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;

    int p[n], at[n], bt[n], pr[n];
    int rt[n], ct[n], tat[n], wt[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> at[i] >> bt[i];   
        rt[i] == bt[i];
    }

    int time = 0, completed = 0;

    while (completed < n)
    {
        int idx = -1;
        int highestPriority = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if(at[i] <= time && rt[i] >0){
                if (bt[i] < highestPriority)
                {
                    highestPriority = bt[i];
                    idx = i;
                }
                else if (bt[i] == highestPriority)
                {
                    if(at[i] < at[idx]){
                        idx = i;
                    }
                }
            }
        }
        if(idx == -1){
            time++; 
            continue;
        }

        rt[idx]--;
        time++;

        if(rt[idx] == 0){
     
            completed++;

            ct[idx]= time;
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