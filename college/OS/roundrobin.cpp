// round robin 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;
    int at[n], bt[n], ct[n], tat[n], wt[n];
    cout << "Enter the arrival time and burst time of the processes: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> at[i] >> bt[i];
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (at[i] > at[j])
            {
                temp = at[i];
                at[i] = at[j];
                at[j] = temp;
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }
    int tq;
    cout << "Enter the time quantum: ";
    cin >> tq;
    int rem_bt[n];
    for (int i = 0; i < n; i++)
    {
        rem_bt[i] = bt[i];
    }
    int t = 0;
    while (1)
    {
        bool done = true;
        for (int i = 0; i < n; i++)
        {
            if (rem_bt[i] > 0)
            {
                done = false;
                if (rem_bt[i] > tq)
                {
                    t += tq;
                    rem_bt[i] -= tq;
                }
                else
                {
                    t += rem_bt[i];
                    rem_bt[i] = 0;
                    ct[i] = t;
                }
            }
        }
        if (done == true)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
    }
    for (int i = 0; i < n; i++)
    {
        wt[i] = tat[i] - bt[i];
    }
    cout << "Process\tAT\tBT\tCT\tTAT\tWT" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t" << at[i] << "\t" << bt[i] << "\t" << ct[i] << "\t" << tat[i] << "\t" << wt[i] << endl;
    }
    return 0;
}
