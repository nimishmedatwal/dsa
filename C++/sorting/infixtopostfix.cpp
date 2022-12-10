//infix to postfix
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
string infixToPostfix(string str){
    stack* s=new stack();
    s->top=-1;
    s->size=str.length();
    s->arr=new char[s->size];
    string result="";
    for(int i=0;i<str.length();i++){
        if(isOperand(str[i])){
            result+=str[i];
        }
        else{
            if(precedence(str[i])>precedence(peek(s))){
                push(s,str[i]);
            }
            else{
                while(precedence(str[i])<=precedence(peek(s))&&!isEmpty(s)){
                    result+=pop(s);
                }
                push(s,str[i]);
            }
        }
    }
    while(!isEmpty(s)){
        result+=pop(s);
    }
    return result;
}
int main(){
    string str="a+b*c-d/e";
    cout<<infixToPostfix(str);
}

