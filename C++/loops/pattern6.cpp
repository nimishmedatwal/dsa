#include <iostream>
using namespace std;
int main(){
    int rows=6;
    int cols=5;
    for (int i=rows ; i>0 ;i--){
        for (int j=1 ; j<cols+1 ; j++){
            if(j<i){
                cout<<j<<" ";
            }
        }
        cout<<endl; 
    }
    return 0;
}