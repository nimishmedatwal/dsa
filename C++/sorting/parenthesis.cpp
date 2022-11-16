#include <iostream>
using namespace std;
class stack{
    int* arr;
    int top;
    int capacity;
    public:
    stack(int n){
        arr=new int[n];
        top=-1;
        capacity=n;
    }
    void push(int n){
        if(top==capacity-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=n;
    }
    int pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        int temp=arr[top];
        top--;
        return temp;
    }
    int peek(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==capacity-1;
    }
};
bool isBalanced(string str){
    stack s(str.length());
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            s.push(str[i]);
        }
        else if(str[i]==')'){
            if(s.isEmpty()){
                return false;
            }
            s.pop();
        }
    }
    return s.isEmpty();
}
int main(){
    string str="((a+b)+(c-d+f))";
    cout<<isBalanced(str)<<endl;
}