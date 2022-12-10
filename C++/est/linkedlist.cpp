#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    node* next;
    int data;
    node(int val){
        data=val;
        next=NULL;
    }
};
void inserttail(node* &head,int val){
    node* a=new node(val);
    node* temp=head;
    if(head==NULL){
        head=a;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=a;
}
void display (node* &head){
    node* temp =head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
        cout<<temp->data;

}

int main(){
    node*head =NULL;
    inserttail(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,5);
    display(head);
}