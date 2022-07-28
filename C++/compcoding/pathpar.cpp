#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
#define all(_obj) _obj.begin(), _obj.end()
#define F first
#define S second
#define pll pair<ll, ll>
#define vll vector<ll>
ll INF = 1e18;
const int N = 1e5 + 11, mod = 1e9 + 7;
ll max(ll a, ll b) { return ((a > b) ? a : b); }
ll min(ll a, ll b) { return ((a > b) ? b : a); }
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void sol(void)
{
    int n, k;
    cin >> n >> k;
    if (n % 2 == 0)
        cout << "YES\n";
    else if (k)
        cout << "YES\n";
    else
        cout << "NO\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int test = 1;
    cin >> test;
    while (test--)
        sol();
}