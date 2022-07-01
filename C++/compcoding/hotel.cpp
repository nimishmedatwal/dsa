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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int arr[24] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = a[i]; j < b[i]; j++)
            {
                arr[j - 1]++;

            }
        }
        sort(arr, arr + 24);
        cout<< arr[23]<<endl;
    }
}


