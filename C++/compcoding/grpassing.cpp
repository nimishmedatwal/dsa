#include <bits/stdc++.h>
using namespace std;
bool fun(unordered_map<int, int> &m)
{
    for (auto b : m)
        if (b.second % b.first != 0)
        {
            return false;
        }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            m[a]++;
        }
        if (fun(m))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}