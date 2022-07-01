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
        string s = to_string(n);
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                count0++;
            }
            else
                count1++;
        }
        cout << count0 << " " << count1 << endl;
        if (count0 == 1 || count1 == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}