#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(5);
    a.push_back(7);
    // for (int i=0 ;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    vector<int>::iterator it;
    for(it=a.begin();it!=a.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}