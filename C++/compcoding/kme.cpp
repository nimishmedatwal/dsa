#include <bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin>>T;
    while(T--){
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt=-1;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(arr[j]==i){
                    continue;
                    cout<<1<<" ";
                }
                int cnt=i;
            }
        }
        if (k==cnt){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
