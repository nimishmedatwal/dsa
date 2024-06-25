#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int beg,int mid,int end){
    int n1=mid-beg-1;
    int n2=end-mid;
    int l[n1+1],r[n2+1];
    for(int i=0;i<n1;i++){
        
    }
}
int mergesort(int arr[],int beg,int end){
    if(beg<end){
        int mid=(beg+end)/2;
        mergesort(arr,beg,mid);
        mergesort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}
int main(){
    int arr[8]={4,2,5,6,1,9,8,6};
    mergesort(arr,0,7);
}
1,4 6,7