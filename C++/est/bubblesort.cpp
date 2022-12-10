#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main() {
    int arr[10]={6,5,4,2,7,8,9,10,34,1};
    bubblesort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}