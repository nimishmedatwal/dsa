#include <iostream>
using namespace std;
int main(){
    int rows=5;
    int col =4;
    for (int i = 0 ; i < rows; i++){
        for (int j=0 ; j< col ;j++){
           if (i==0 || i==rows-1) {
               cout<<"*";
        }   else if(0<i<rows-1 && j==0){
            cout<<"*";
        }   else if(0<i<rows-1 && j==col-1){
            cout<<"*";
        }   else if (0<i<rows-1 && 0<j<col-1){
               cout<<" ";
            
        }
        
    }
    cout<<endl;
    }
    return 0;
}