#include <bits/stdc++.h>
using namespace std;
}
int main()
{
    // your code goes here
    int n;
    cin >> n;
    int l;
    cin >> l;
    int a[n][n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> a[i][j][k];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << a[i][j][k] << " ";
            }
        }
        cout << endl;
    }
    while (l--)
    {
        int tem = a[0][0][0];
        a[0][0][0] = a[n - 1][n - 1][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                a[j][i][j] = ;
            }
        }
    }
}
}
}