#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--){
        string a,b;
        cin>>a>>b;
        a=a+b;

        int n;
        cin>>n;
        string s;
        string temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            s+=temp;
        }
        int counter;
        for (int i=0 ;i<a.length();i++){
            counter=0;
            for (int j=0;j<s.length();j++){
                if(a[i]==s[j]){
                    counter++;
                    break;
                }
            }
            if(counter==0){
                cout<<"NO"<<endl;
                break;
            }

        }
        if(counter==1)
            cout<<"YES"<<endl;
            
    }
}