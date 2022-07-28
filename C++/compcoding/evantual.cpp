#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                int count = 0;
                for (int k = 0; k < n; k++)
                {
                    if (s[k] == s[j])
                    {
                        count++;
                    }
                }
                if (count % 2 != 0)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
        }
    }
    return 0;
}
