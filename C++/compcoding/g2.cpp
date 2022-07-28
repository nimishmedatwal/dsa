#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

LL gcd(LL a, LL b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        LL n,m;
        cin >> n >> m;
        LL p=(n/2)*((m+1)/2) + (m/2)*((n+1)/2);
        LL q=n*m;
        LL gc=gcd(p,q);
        cout << p/gc << "/" << q/gc<<endl;
    }
    return 0;
    
}
