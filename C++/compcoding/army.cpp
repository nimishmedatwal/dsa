#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,atk,def;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>500){
                atk=atk+a[i];
            }
            else if (a[i]<500){
                def=def+(1000-a[i]);
            }
            else if (a[i]==500){
                if (atk<=def){
                    atk=atk+a[i];
                    cout<<"g";
                }
                else{
                    def=def+(1000-a[i]);
                    cout<<"f";
                }
            }
        }
        cout<<atk<<" "<<def<<endl;
        cout<<atk*def<<endl;
        
    }
}