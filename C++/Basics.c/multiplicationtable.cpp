#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cout<<endl;
    cin>>m;
    for (int i=0; i<m+1; i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}