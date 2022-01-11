#include <iostream>
using namespace std;
int main(){
    int rows=6;
    int cols=5;
    int a =0;
    for (int i=0 ; i<rows ;i++){
        for (int j=0 ; j<cols ; j++){
            if (j<i){
                cout<<a<<" ";
            }
            if (a==0){
                a=1;
            }else{
                a=0;
            }
        }
        cout<<endl; 
    }
    return 0;
}