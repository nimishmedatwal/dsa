#include <iostream>
using namespace std;

void rightrotation(int arr[],int n){
    int temp=arr[n-1];
    for(int i=0 ;i<n-1 ;i++){
        arr[i+1]=arr[i];
        arr[0]=temp;
    }
}
void printarray(int arr[],int n){
    for (int i=0 ; i <n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
	int t,k,n;
    cin>>t;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[0];
    }
    for (int i=1;i<=k;i++){
        rightrotation(arr,n);
    }
    printarray(arr,n);

	return 0;
}
