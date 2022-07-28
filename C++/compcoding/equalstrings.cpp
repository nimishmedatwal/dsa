#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int a; cin>>a;
        string b,c;
        // vector m<26,0>;
        cin>>b>>c;
        int count=0;
        for (int j=0;j<a;j++){
            if (b[j]!=c[j] ){
                count++;
            }
        }
    return 0;
}
