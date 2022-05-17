#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
int prefixEvaluation(string a){
    stack<int> s;
    for (int i=a.length()-1;i>=0;i--){
        if(a[i]>='0' && a[i]<='9'){
            s.push(a[i]);
        }
        else{
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            switch (a[i])
            {
            case '+':
                s.push(op1+op2);
                break;
            case '-':
                s.push(op1-op2);
                break;
            case '/':
                s.push(op1/op2);
                break;
            case '*':
                s.push(op1*op2);
                break;
            case '^':
                s.push(pow(op1,op2));
                break;

            }
        }
    }
    return s.top();

}
int main(){
    cout<<prefixEvaluation("-+7*45+20");
    return 0;

    
}