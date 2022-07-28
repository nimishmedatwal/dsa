#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n=5;
    int d=2;
    int a[d];
    for (int i=0 ;i<d;i++){
        a[i]=arr[i];
    }
    for (int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for (int i=n-d;i<n;i++){
        arr[i]=a[i-n+d];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}