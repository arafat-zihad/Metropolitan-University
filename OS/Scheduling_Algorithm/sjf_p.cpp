// count: 1, 2, 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int p[n], at[n], bt[n];
    int rt[n], ct[n], tat[n], wt[n];

    bool completed[n];

    for(int i = 0; i < n; i++){
        cin >> p[i] >> at[i] >> bt[i];

        completed[i] = false;
    }
    int time = 0, done = 0;

    while (done < n)        
    {
        int idx = -1;
        int shortestBT = INT_MAX;

        for(int i = 0; i < n; i++){
            if(at[i] <= time && completed[i] == false){
                if(bt[i] < shortestBT){
                    shortestBT = bt[i];
                    idx = i;
                }
                else if(shortestBT == bt[i]){
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

        time += bt[idx];
        ct[idx] = time;
        tat[idx] = ct[idx] - at[idx];
        wt[idx] = tat[idx] - bt[idx];
        completed[idx] =true;
        done++;
        }
    

    
}