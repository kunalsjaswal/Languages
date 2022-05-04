#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertatHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
    head->prev=n;
    }

    head=n;
}

void insertatTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        insertatHead(head,val);
        return;
    }
    while (temp->next!=NULL){
        temp=temp->next;
    }
    
    temp->next=n;
    n->prev=temp;
}
void delatHead(node* &head){
    node* temp=head->next;
    head->next->prev=NULL;
    delete head;
    head=temp;
    
}

void del(node* &head,int val){
    node* temp=head;
     if(head->data==val && temp->prev==NULL){
         delatHead(head);
        return;
    } 


    while(temp->data!=val){
        temp=temp->next;
    }
    temp->prev->next=temp->next;

    if(temp->next!=NULL){         //FOR LAST ELEMENT PREVIOUS IS NOT DEFINED
    temp->next->prev=temp->prev;
    }
    delete temp;


}

void display(node* head){
    node* temp=head;
    cout<<"\nNULL<-";
    
    while(temp!=NULL){
        cout<<temp->data<<"-";
        temp=temp->next;

    }
    cout<<">NULL";
    
}

int main(){
    node* head=NULL;
    insertatTail(head,5);
    insertatTail(head,9);
    insertatTail(head,2);
    insertatTail(head,1);
    insertatTail(head,8);
    display(head);
    insertatHead(head,12);
    display(head);
    del(head,12);
    del(head,5);
    display(head);

}