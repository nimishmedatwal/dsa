#include <iostream>
using namespace std;
void mergesort(int* arr, int n){
    if(n<=1){
        return;
    }
    int mid=n/2;
    mergesort(arr,mid);
    mergesort(arr+mid,n-mid);
    int* temp=new int[n];
    int i=0;
    int j=mid;
    int k=0;
    while(i<mid && j<n){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<n){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    delete [] temp;
}
int main(){
    int arr[5]={5,1,6,2,4};
    mergesort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
