#include <iostream>
using namespace std;
#include <stack>
void reverse(string x){
    stack<string> st;
    for (int i=0; i<x.length() ;i++){
        string d="";
        while(x[i]!=' ' && i<x.length()){
            d=d+x[i];
            i++;
        }
        st.push(d);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    string s="Hello My name is Nimish";
    // cin>>s;
    reverse(s);    

}