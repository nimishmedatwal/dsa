#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if (n==1){
        return 1;
    }
    int prev=fact(n-1);
    return prev*n;
}
int main(){
    cout<<fact(4);
}
