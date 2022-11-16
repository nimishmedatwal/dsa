#include <iostream>
using namespace std;
void bubblesort(int* arr, int n){
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag=false;
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        if(flag==true){
            break;
        }
    }
}
int main(){
    int arr[5]={1,2,3,2,4};
    cout<<&arr[3]<<endl;
    bubblesort(arr,5);
    cout<<&arr[3]<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
