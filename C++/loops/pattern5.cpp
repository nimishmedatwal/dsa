#include <iostream>
using namespace std;
int main(){
    int rows=6;
    int cols=5;
    int count=1;
    for (int i=0 ; i<rows;i++){
        for (int j=0 ; j<cols ; j++){
            if (j<i){
                cout<<count++<<" ";
            }
        }
        cout<<endl; 
    }
    return 0;
}