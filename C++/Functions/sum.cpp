#include <iostream>
using namespace std;
int add(int n ){
    int sum ;
    for (int i =1 ; i<=n ; i++){
        sum =sum+i;
    }
    return sum;
}
int main(){
    cout<<add(10);
    return 0;
    
}