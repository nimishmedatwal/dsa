// shortest job first
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
            if (bt[i] > bt[j])
            {
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
                temp = at[i];
                at[i] = at[j];
                at[j] = temp;
            }
        }
    }
    ct[0] = at[0] + bt[0];
    for (int i = 1; i < n; i++)
    {
        ct[i] = ct[i - 1] + bt[i];
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