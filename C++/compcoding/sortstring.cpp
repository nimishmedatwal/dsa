#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {

            if(s[i]=='1'){
                for (int j=i;j<n;j++){
        
                    if(s[j]=='0'){
                        ans++;
                        
                        break;
                    }
                    else{
                        i++;
                    }
                }
            }
            
        }
        cout << ans << endl;    
    }
}

