#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int c = 0;
    int result = 0;
    for (int i = 0; i < x; i++)
    {
        int a[54];
        for (int j = 0; j < 54; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < 9; j++)
        {
            if (a[j * 4 + 0] == '0')
                c++;
            if (a[j * 4 + 1] == '0')
                c++;
            if (a[j * 4 + 2] == '0')
                c++;
            if (a[j * 4 + 3] == '0')
                c++;
            if (a[54 - j * 2 - 1] == '0')
                c++;
            if (a[54 - j * 2 - 2] == '0')
                c++;

            if (c >= n)
            {
                result++;
            }
        }
    }
    cout << result << endl;
    return 0;
}