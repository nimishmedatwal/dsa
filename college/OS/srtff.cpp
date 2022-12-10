  
#include <bits/stdc++.h>
using namespace std;
  
struct Process {
    int pid; // Process ID
    int bt; // Burst Time
    int art; // Arrival Time
};
void findWaitingTime(Process proc[],int n ,int wt[]){
    int rt[n];
    for(int i=0;i<n;i++){
        rt[i]=proc[i].bt;
    }
    int complete=0,t=0,minm=INT_MAX;
    int shortest=0,finish_time;
    bool check=false;
    while(complete!=n){
        for(int i=0;i<n;i++){
            if(proc[i].bt)
        }
    }
}
void findTurnAroundTime(Process proc[], int n,
                        int wt[], int tat[])
{
    // calculating turnaround time by adding
    // bt[i] + wt[i]
    for (int i = 0; i < n; i++)
        tat[i] = proc[i].bt + wt[i];
}
  
// Function to calculate average time
void findavgTime(Process proc[], int n)
{
    int wt[n], tat[n], total_wt = 0,
                    total_tat = 0;
  
    // Function to find waiting time of all
    // processes
    findWaitingTime(proc, n, wt);
  
    // Function to find turn around time for
    // all processes
    findTurnAroundTime(proc, n, wt, tat);
  
    // Display processes along with all
    // details
    cout << " P\t\t"
        << "BT\t\t"
        << "WT\t\t"
        << "TAT\t\t\n";
  
    // Calculate total waiting time and
    // total turnaround time
    for (int i = 0; i < n; i++) {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << proc[i].pid << "\t\t"
            << proc[i].bt << "\t\t " << wt[i]
            << "\t\t " << tat[i] << endl;
    }
  
    cout << "\nAverage waiting time = "
        << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "
        << (float)total_tat / (float)n;
}
  
// Driver code
int main()
{
    Process proc[] = { { 1, 6, 2 }, { 2, 2, 5 },
                    { 3, 8, 1 }, { 4, 3, 0}, {5, 4, 4} };
    int n = sizeof(proc) / sizeof(proc[0]);
  
    findavgTime(proc, n);
    return 0;
}