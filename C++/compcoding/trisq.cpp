#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if (n==0|| n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=n%2-1;
        cout<<fibonacci(p)<<endl;
    }
}
