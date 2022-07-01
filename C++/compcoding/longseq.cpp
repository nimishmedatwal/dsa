#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        string s=to_string(n);  
        int count0=0;
        int count1=0;
        for (int i=0;i<s.length();i++){
            if (s[i]=='0') count0++;
            else count1++;
        }
        if (count0==1 || count1==1) cout << "YES" << endl;
        else cout << "NO" << endl;
     }
}