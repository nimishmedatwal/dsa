#include<iostream>
using namespace std;
int main(){
    // string a[100]={"Indicates ","that", "the", "executed", "program"," has", "terminated ","abnormally ", "or "," crashed"};
    char a[10]={'N','I','T','I','N'};
    int n =6;
    int g=1;
    for (int i=0;i <(n/2)-1;i++){
        cout<<'t';
        if (a[i]!=a[n-i-1]){
            g=0;
            cout<<"f";
            break;
        }
    }
    cout<<g;
    return 0;
}