#include <iostream>
using namespace std;
int main(){
    int a[]={3,2,2,4,5,7,8,8,4};
    int pos,n=9;
    cout<<"Enter the pos you want to delete ";
    cin>>pos;
    for (int i=pos-1; i<n; i++){
        a[i-1]=a[i];
    }
    for (int i=0 ;i<n ; i++){
        cout<<a[i]<<" ";
    }
}