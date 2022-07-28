#include <iostream>
using namespace std;
int main(){
    int arr[7]={34,2,13,55,32,1,3};
    int n=7;
    for (int j=0;j<n ;j++){
        for (int i=0 ;i<n-1 ; i++){
            if (arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for (int i=0; i<n ;i++){
        cout<<arr[i]<<" ";

    }
}