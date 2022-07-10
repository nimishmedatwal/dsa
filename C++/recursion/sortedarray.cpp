#include <iostream>
using namespace std;
bool sort(int arr[],int n){
    if (n==1){
        return true;
    }
    int rest= sort(arr+1,n-1);
    if (arr[0]<arr[1] && rest){
        return true;
    }
    else return false;
    

}
int main (){
    int arr[]={1,1,4,2,3,4,5};
    cout<<sort(arr,5);
    return 0;
}
// 1 2 3 4 5 6 7 