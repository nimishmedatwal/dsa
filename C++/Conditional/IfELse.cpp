#include <iostream>
using namespace std;
int main(){
    int savings;
    cin>>savings;
    if (savings>5000){
        cout<<"Ravi\n";
    }
    else if(savings<5000 & savings>2000){
        cout<<"Rashi\n";
    }
    else{
        cout<<"Friends\n";
    }
    return 0;
}