// count: 1, 2, 3, 4, 5
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;

    int allocation[n][m];
    int maximum[n][m];
    int need[n][m];
    int available[m];

    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            cin >> allocation[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maximum[i][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        cin >> available[j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            need[i][j] = maximum[i][j] - allocation[i][j];
        }
    }

    int work[m];
    for (int  j = 0; j < m; j++)
    {
        work[j] = available[j];
    }
    
    bool finish[n];
    for (int i = 0; i < n; i++)
    {
        finish[i] = false;
    }

    int safeSequence[n];
    int count = 0;

    while (count < n)        // b f i b f i br.
    {                       // i f
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if(finish[i] == false){
                bool possible = true;
                for (int j = 0; j < m; j++)
                {
                    if(need[i][j] > work[j]){
                        possible = false;
                        break;
                    }
                }
                if(possible){
                    for (int j = 0; j < m; j++)
                    {
                        found = true;
                        finish[i] = true;
                        safeSequence[count] = i;
                        count++;
                        
                    }
                    
                }
                
            }
        }
        if(found == false){
            break;
        }
        
    }
    if(count == n){
        cout << "safe";
        cout << "safeSequence: ";
        for (int i = 0; i < n; i++)
        {
            cout << "P" << safeSequence[i];
            if(i != n - 1){
                cout << " -> ";
            }
        }
        
    }
    else{
        cout << "unsafe";
    }
    
    


    return 0;
}