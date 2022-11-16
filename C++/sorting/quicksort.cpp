#include <iostream>
using namespace std;
void quicksort(int* arr, int n){
    if(n<=1){
        return;
    }
    int pivot=arr[n-1];
    int i=-1;
    int j=0;
    while(j<n-1){
        if(arr[j]<=pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        j++;
    }
    int temp=arr[i+1];
    arr[i+1]=arr[n-1];
    arr[n-1]=temp;
    quicksort(arr,i+1);
    quicksort(arr+i+2,n-i-2);
}
int main(){
    int arr[5]={5,1,6,2,4};
    quicksort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
