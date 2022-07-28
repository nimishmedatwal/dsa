#include <iostream>
using namespace std;
int main(){
    int row=5 ;
    int col=5;
    for (int i=0; i<row;i++){
        for (int j=0; j<col ; j++){
            if(j<col-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}