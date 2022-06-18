#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int n,g;
        cin>>n>>g;
        string s;
        cin>>s;
        int count=0;
        for (int j=0;j<n/2;j++){
            if (count==g){
                break;
            }
            if (s[j]!=s[n-1-j]){
                count++;
            }
        }
        cout<<count<<endl;
    return 0;
    }
}