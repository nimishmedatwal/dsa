#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int N=4;
    int ans=0;
    int temp=0;
    for (int i=0;i<3;i++){
        for (int j=i+1;j<4 ; j++){
            temp=(arr[i]^arr[j]);
        }
    return ans;
}