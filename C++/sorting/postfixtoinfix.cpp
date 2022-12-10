// postfix to infix
#include <iostream>
using namespace std;
class stack{
    public:
    int top;
    int size;
    char* arr;
};
int isEmpty(stack* s){
    if(s->top==-1){
        return 1;
    }
    return 0;
}
int isFull(stack* s){
    if(s->top==s->size-1){
        return 1;
    }
    return 0;
}
void push(stack* s, char c){
    if(isFull(s)){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    s->top++;
    s->arr[s->top]=c;
}
char pop(stack* s){
    if(isEmpty(s)){
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    char temp=s->arr[s->top];
    s->top--;
    return temp;
}
char peek(stack* s){
    if(isEmpty(s)){
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    return s->arr[s->top];
}
int isOperand(char c){
    if(c=='+'||c=='-'||c=='*'||c=='/'){
        return 0;
    }
    return 1;
}
int precedence(char c){
    if(c=='+'||c=='-'){
        return 1;
    }
    else if(c=='*'||c=='/'){
        return 2;
    }
    return 0;
}
string postfixToInfix(string str){
    stack* s=new stack();
    s->top=-1;
    s->size=str.length();
    s->arr=new char[s->size];
    for(int i=0;i<str.length();i++){
        if(isOperand(str[i])){
            push(s,str[i]);
        }
        else{
            char op1=pop(s);
            char op2=pop(s);
            string temp="("+op2+str[i]+op1+")";
            push(s,temp[0]);
        }
    }
    return pop(s);
}
int main(){
    string str="ab*c+";
    cout<<postfixToInfix(str);
}
