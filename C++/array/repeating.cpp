#include <iostream>
using namespace std;

int main(){
    int arr[]={1,3,4,5,3,2,5,3,5,9,8,8,3,4};
    int n=14;
    int max=0;
    for(int i=0; i<n ;i++){
        for (int j=i+1; j<n ;j++){
            if (arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    return 0;
}