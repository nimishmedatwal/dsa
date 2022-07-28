#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            int a[2];
            cin >> a[0] >> a[1];
            for (int j = a[0]; j <= a[1]; j++)
            {
                if (j!=i){
                    arr[j - 1]++;
                }
                
            }
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>0){
                count++;
            }
        }
        cout << count << endl;

    }
}
