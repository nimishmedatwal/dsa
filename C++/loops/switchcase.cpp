#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the operator : \n";
    cin>>op;
    cout<<"Enter the first number : \n";
    cin>>a;
    cout<<"Enter the second number : \n";
    cin>>b;
    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    
    default:
        cout<<"Choose a diffrent operator \n";
        break;
    }
    return 0;
}