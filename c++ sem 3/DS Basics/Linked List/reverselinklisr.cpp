#include<iostream>
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

void insertnode(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
    temp=temp->next;
    }
    temp->next=n;
}

void reversing(node* &head){            //ITERATIVE METHOD
    node* preptr=NULL;
    node* curptr=head;
    node* nextptr;
    while(curptr!=NULL){
        nextptr=curptr->next;
        curptr->next=preptr;

        preptr=curptr;
        curptr=nextptr;
        
    }

    head=preptr;
} 


void display(node* head){
    node* temp=head;
    cout<<"\n";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
 
 int main(){
     node* head=NULL;
    insertnode(head,2);
    insertnode(head,8);
    insertnode(head,1);
    insertnode(head,5);
    insertnode(head,26);
    insertnode(head,12);
    display(head);
    cout<<"\nREVERSING";
    reversing(head);             //ITERATIVE METHOD
    display(head);

 }