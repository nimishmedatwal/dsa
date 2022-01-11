#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void inserttail(node* &head, int val){
    node* a=new node(val);
    node* temp=head;
    if(head==NULL){
        head=a;
        return;
    }
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=a;
     
}
void display(node* head){
    node*temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }    
    cout<<endl;
}
node* reverse (node* &head){
    node* prevptr=NULL;
    node * currptr=head;
    node* nextptr;
    while(currptr!=NULL ){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
int main(){
    node*head =NULL;
    inserttail(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,5);
    display(head);
    node* newhead=reverse(head);
    display(newhead);
    return 0;
}