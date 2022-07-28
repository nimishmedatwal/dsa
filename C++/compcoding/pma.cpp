#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        int sum=-1;
        int ptr;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if (i % 2 == 0)
            {
                ptr=abs(a[i]);
            }
            else{
                ptr=-abs(a[i]);
            }
            sum+=ptr;

        }
        cout<<sum<<endl;
        
    }
}
