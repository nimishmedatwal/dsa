#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool compare(pair<int , int>p1, pair<int ,int>p2){
    return(p1.first<p2.first);
}
int main(){
    int arr[6]={4,5,2,1,5,6};
    vector<pair<int, int>> p;
    for (int i=0;i<sizeof(arr);i++){
        p.push_back(make_pair(arr[i],i));
    }
    sort(p.begin(),p.end(),compare);
    for(int i=0;i<p.size();i++){
        arr[p[i].second]=i;
    }
    for(int i=0; i<sizeof(arr);i++){
        cout<<arr[i]<<" ";
    }
    }   