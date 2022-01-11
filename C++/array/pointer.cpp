#include <iostream>
using namespace std;
int main(){
    int a =10;
    int *ap ;
    ap=&a;
    cout<<ap<<endl;
    ap++;
    cout<<ap;
    return 0;
}