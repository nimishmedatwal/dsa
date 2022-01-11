#include <iostream>
using namespace std;
int num;
void tower(int n, char src, char dest, char helper){
    if (n==0){
        return;
    }
    tower(n-1,src ,helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    num++;
    cout<<num<<endl;
    tower(n-1,helper,dest,src);
}
int main(){
    tower(12,'A','C','B');
    return 0;
    
}