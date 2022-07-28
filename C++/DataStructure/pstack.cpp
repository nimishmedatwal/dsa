#include <iostream>
using namespace std;

int n=100;
class stack{
    string *arr;
    int itop;
    public:
    stack(){
        arr=new string[n] ;
        itop=-1;
    }
    void push(string x){
        if(itop==n-1){
            cout<<"Stack Overflow";
            return;
        }
        itop++;
        arr[itop]=x;
    }
    void pop(){
        if(itop==-1){
            cout<<"Stack is empty";
            return;
        }
        itop--;
    }
    string Top(){
        if(itop==-1){
            cout<<"Stack is empty";
        }
        return arr[itop];
    }
    bool empty(){
        return itop==-1;
        }
    
};

int main(){
    stack st;
    st.push("34677");
    cout<<st.Top()<<endl;
    st.push("2");
    cout<<st.Top()<<endl;
    st.push("3");
    cout<<st.Top()<<endl;
    st.push("5");
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;

    

}
