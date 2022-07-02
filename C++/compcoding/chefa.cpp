#include <iostream>
#include <algorithm>
using namespace std;

long long ans, a[100001];
int t, i, n, it;

main()
{
    cin >> t;
    for (it = 1; it <= t; it++)
    {
        ans = 0;
        cin >> n;
        for (i = 1; i <= n; i++)
            cin >> a[i];

        sort(a + 1, a + n + 1);

        for (i = n; i >= 1; i = i - 2)
            ans += a[i];

        cout << ans << endl;
    }
}
