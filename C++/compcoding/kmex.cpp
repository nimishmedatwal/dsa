#include <bits/stdc++.h>
using namespace std;
int findFirstMissing(int array[],
                     int start, int end)
{
    if (start > end)
        return end + 1;

    if (start != array[start])
        return start;

    int mid = (start + end) / 2;

    // Left half has all elements
    // from 0 to mid
    if (array[mid] == mid)
        return findFirstMissing(array,
                                mid + 1, end);

    return findFirstMissing(array, start, mid);
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x = findFirstMissing(arr, 0, n);

        if (n == m)
        {
            if (x == k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        if (m < n)
        {
            int count = 0;
            
        }
    }
}
