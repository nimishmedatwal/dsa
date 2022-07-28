#include <iostream>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 4, 8};
    int n=5;
    int b=2;
    int temp=0;
    for(int i=0; i<n; i++){
        if(arr[i]==b){
            temp=arr[i];
            temp=temp*2;
            if (arr[i]=temp){
                temp=temp*2;
            }
        }
    }
    cout<<temp;
}
