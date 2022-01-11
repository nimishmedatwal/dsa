#include <iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    for (int i=0; i<row ;i++){
        for (int j=col; j>i ;j--){
            cout<<"*";

        }
        cout<<endl;

    }
    return 0;
}