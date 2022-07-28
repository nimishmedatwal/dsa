#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        int n,k;
        cin >> n >> k;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum += a[i];
        }
        cout<<"Case #"<<t<<": "<<sum%k<<endl;

    }
}