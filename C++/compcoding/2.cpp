// ---------------nimishmedatwal--------------
#include <iostream>
using namespace std;
int shuffled=0;
struct linkedlist{
    int data;

    struct linkedlist *prev;
    struct linkedlist *next;
};
typedef struct linkedlist node;

node *head=NULL, *temp;

void create(int a){
    if(head == NULL){
        head = new node;
        head->data = a;
        head->prev = NULL;
        head->next = head;
        temp = head;
    }
}

void insertEnd(int a){
    if(head!=NULL){
        temp->next = new node;
        temp->next->data = a;
        temp->next->prev = temp;

        temp = temp->next;
        temp->next = NULL;
    }else{
        create(a);
    }
}

void print(){
    node *temp = head;
    bool ifcircular = false;
    while(temp != NULL){

        if(temp->prev == NULL && temp != head){
            ifcircular = true;
            break;
        }
        cout << temp->data << " ";
        temp = temp->next;
    }
    if(ifcircular){
        node* temp1 = temp;
        do{
            cout << temp->data << " ";
            temp = temp->next;
        }while(temp != temp1);
        cout << temp->data;
    }
    cout << endl;
}

void insertBeginning(int a){
    if(head != NULL){
        node *p;
        p = new node;
        p->data = a;
        p->prev = NULL;

        head->prev = p;
        p->next = head;
        head = p;
    }else{
        create(a);
    }
}

node* getNodeAt(int k){
    node* t=  head;
	for(int i=1;i<k;i++){
		t = t->next;
	}
	return t;
}

void shuffle(int a, int b){
    if(shuffled==0){
		node* node1 = getNodeAt(a);
		node* node2 = getNodeAt(b);
		node2->next->prev = node1->prev;
		node2->next->next = node1;
		node1->prev->next = node2->next;
		node1->prev = NULL;
		node2->next = node1;
		shuffled++;
	}
	else{
		
	}
}

int main(){
    int t;
    cin >> t;
    int insert = 0;
    while(t--){
        char s;
        cin >> s;
        if(s == 'I'){
            int a;
            cin >> a;
            if(insert%2 == 0){
                insertBeginning(a);
            }else{
                insertEnd(a);
            }
            insert++;
        }else if(s == 'D'){
            print();
        }else if(s == 'S'){
            int a, b;
            cin >> a >> b;
            shuffle(a,b);
        }
    }
}