#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (abs(arr[i] - arr[i + 1]) > 1)
            {
                count = 1;
                break;

            }
            
        }
        if (count == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
// 2 2 3 3