/*             nimishmedatwal             */  

#include<bits/stdc++.h>
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
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
            
        }
    }
    cout<<count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(0);
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