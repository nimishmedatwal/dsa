#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < 30; i++) {
            int cnt = 0;
            if (n >= (1 << i)) {
                cnt += max(0, n % (1 << (i + 1)) + 1 - (1 << i));
                cnt += n >> (i + 1) << i;
            }
            if (cnt * 2 <= n) {
                cnt = cnt * 2;
            } else {
                cnt = (n - cnt) * 2;
            }
            cout<<cnt<<" ";
    }
}
}