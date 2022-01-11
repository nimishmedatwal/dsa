#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,-55,3,2,5,3,-5,9,8,8,3,4};
    int n=sizeof(arr)/4;
    

    int max=0 ;
    for(int i=0; i<n ;i++){
        for (int j=i ; j< n ; j++){
            int sum=0;
            for(int k=i; k<=j;k++){
                
                sum=sum+arr[k];
            }
            cout<<sum<<" ";
            if (max<sum){
                max=sum;
            }
        }
    }
    cout<<endl;
    cout<<max; 
}