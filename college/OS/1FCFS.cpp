// first come first serve
#include <bits/stdc++.h>
using namespace std;
struct Process
{
    int pid;
    int bt;
    int at;
};
int main()
{
    int n;
    cout << "Enter number of Process :";
    cin >> n;
    Process proc[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Process ID: ";
        cin >> proc[i].pid;
        cout << "Enter burst time: ";
        cin >> proc[i].bt;
        cout << "Enter arrival time: ";
        cin >> proc[i].at;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (proc[i].at > proc[j].at)
            {
                swap(proc[i], proc[j]);
            }
        }
    }
    int sum = 0;
    cout << "Process\tAT\tBT\tTAT\tWT" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << proc[i].pid << "\t" << proc[i].at << "\t" << proc[i].bt << "\t" << sum + proc[i].bt << "\t" << sum << endl;
        sum += proc[i].bt;
    }
}
