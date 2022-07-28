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
    int s=add(10);
    cout<<s;
    return 0;
    
}