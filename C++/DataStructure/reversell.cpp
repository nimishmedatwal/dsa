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
void deletion(node* &head, int val){
    node* temp=head;
    
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}
void deletehead(node* &head){
    node* todelete = head->next;
    head=head->next;
    delete todelete;
}
node* reverse(node* &head){
    node* previous =NULL;
    node* current =head;
    node*nex;
    while(current!=NULL){
        nex=current->next;
        current->next=previous;
        previous=current;
        current=nex;
    }
    return previous;

}
int main(){
    node*head =NULL;
    inserttail(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,4);
    inserttail(head,5);
    inserttail(head,6);
    display(head);
    cout<<endl;
    node* rev = reverse(head);
    display(rev);
    return 0;
}