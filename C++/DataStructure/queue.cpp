#include <iostream>
using namespace std;
int n=20;
class queue {
    int* arr;
    int front ;
    int back;
    public: 
    queue(){
        arr=new int[n];
        front =-1;
        back=-1;
    }
    void push(int x){
        if (back==n-1){
        cout<<"Queue overflow";
        return;
        }
        back++;
        arr[back]=x;
        if (front==-1){
            front=0;
        }
    }
    void pop(){
        if(front==-1 || front>back){
            cout<<"queue is empty";
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"queue is empty";
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        else{
            return false;
        }

    }
        

};
int main(){

}