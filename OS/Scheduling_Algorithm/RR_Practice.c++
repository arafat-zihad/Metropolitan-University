// Count: 1, 2, 3, 4, 5

#include <bits/stdc++.h>
using namespace std;
int main(){
   int n; cin >> n; 
   int tq; cin >> tq;

   int p[n], at[n], bt[n];
   int rt[n], ct[n], tat[n], wt[n];

   for (int i = 0; i < n; i++)
   {
        cin >> p[i] >> at[i] >> bt[i];

        rt[i] = bt[i];
   }

   queue<int> q;

   int time = 0, completed = 0, next = 0;

   q.push(0);
   next = 1;

   while (!q.empty())
   {
        int i = q.front();
        q.pop();

        if(rt[i] > tq){
            time += tq;
            rt[i] -= tq;
        }
        else{
            time += rt[i];
            rt[i] = 0;

            ct[i] = time;
            tat[i] = at[i] - ct[i];
            wt[i] = tat[i] - bt[i];
            completed++;
        }

        while(next < n && at[next] <= time){
            q.push(next);
            next++;
        }

        if(rt[i] > 0){
            q.push(i);
        }

        if(q.empty() && next < n){
            time = at[next];
            next++;
        }
        
   }
   
   
   return 0;
}

