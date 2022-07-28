#include <iostream>
using namespace std;
char duplicate(string a){
    if(a.length()==0){
        return ' ';
    }
    char p=a[0];
    a=a.substr(1);
    duplicate(a);
    if (p==a[0]){
        return p;
        string a=a.substr(1);
    }
    else{
        return a[0];
    }
}
int main(){
    duplicate("aaaaabbbbbbccddd");
    return 0;
}