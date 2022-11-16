// ---------nimishmedatwal------------
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insertend(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void insertfront(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    n->next=head;
    head=n;

}
void insertval(node* &head, int v, int val){
    node* n =new node(val);
    node* temp=head;
    while(temp->data!=v){
        temp=temp->next;
    }
    node* temp2=temp->next;
    temp->next=n;
    n->next=temp2;
}
void search(node* &head,int val){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        if(temp->data==val){
            cout<<"FOUND"<<endl;
            return;
        }
    }
    cout<<"NOT FOUND"<<endl;
    
}
void display(node* &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void deletefront(node* &head){
    if(head==NULL){
        cout<<"LL is empty";
        return;
    }
    node* temp=head;
    head=temp->next;
    delete temp;
}

int main(){
    node* a=NULL;
    insertend(a,1);
    insertend(a,2);
    insertend(a,3);
    inservoid deleteend(node* &head){
    if(head==NULL){
        cout<<"LL is empty";
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    delete temp->next;
}tend(a,4);
    insertend(a,5);
    insertfront(a,4);
    display(a);
    cout<<endl;
    deletefront(a);
    display(a);
 
}