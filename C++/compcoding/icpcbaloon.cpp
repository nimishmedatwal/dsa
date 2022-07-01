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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int pos=0;
        for (int i = 1; i < 8; i++)
        {  
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == i)
                {
                    pos=max(pos,j);
                }
            }

        }
        cout<<pos+1<<endl;
    }
}