#include <iostream>
using namespace std;
int factorial(int num1){
    int temp=num1;
    for (int i=2; i<num1 ;i++){
        temp=temp*i;
    }
    return temp;
}
int main(){
    cout<<factorial(5);
    return 0;
}