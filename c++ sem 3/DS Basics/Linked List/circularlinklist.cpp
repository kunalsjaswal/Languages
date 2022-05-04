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

void insertatHead(node* &head,int val){
    node* n=new node(val);
    
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}

void insertatTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;

    if(head==NULL){
        insertatHead(head,val);
        return;
    }

    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=n;
    n->next=head;
}

void display(node* head){
    node* temp=head;
    cout<<"\n";
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
        cout<<endl;
    

}
int main(){
    node* head=NULL;

    insertatTail(head,5);
    insertatTail(head,8);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,1);
    display(head);
//DELETE AND INSERT SAME AS SINGLY.. I KNOW YOU CAN DO IT AFTER STUDING THIS ALL LINKED LIST;)
}