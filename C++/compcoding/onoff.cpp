#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string s2;
        cin >> s2;
        int result=1;
        for (int i=0;i<n;i++){
            if (s[i]!=s2[i]){
                if (result==1){
                    result--;
                }
                else{
                    result++;
                }
            }
        }
        cout<<result<<endl;
    }
}