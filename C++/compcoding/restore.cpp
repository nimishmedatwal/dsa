/*             nimishmedatwal             */  

#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
#define ppb pop_back
#define all(v) v.begin(), v.end()
#define ts(s) to_string(s)
#define endl "\n"
#define ff first
#define ss second
#define yes cout<<"YES"
#define no cout<<"NO"
#define vi vector<int>
#define mii map<int, int>
// #define sz size()
//stoi(string) -> int

ll mod = 1e9 + 7;

int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int ceil(int a, int b)
{
	if (!(a%b)) return (a/b);
	else return ((a/b) + 1);
}

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j<i;j++)
        {
            if(a[j]%a[i]==0)
            {
                cout<<j+1<<" ";
                break;
            }
            
        }
    }

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1, i = 1;
	cin >> t;
	while (t--)
	{
		// cout << "Case #" << i++ << ": ";  
		solve();
		cout << endl;
	}
	return 0;
}