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

void push(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
void pop(node* &head){
    node* temp=head;
    head=temp->next;
    delete temp;

}

void peek(node* head){
    if(head==NULL){
        cout<<"\nstack is empty i.e.,underflow\n";
    }
    cout<<"\nyour top value of stack is: ";
    cout<<head->data;
}

void display(node* head){
    node* temp=head;
    cout<<"\nyour stack is\n";
    while(temp->next!=NULL){
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
    cout<<temp->data;
}
int main(){
    node* head=NULL;
    push(head,3);
    push(head,1);
    push(head,9);
    push(head,11);
    display(head);
    pop(head);
    display(head);
    peek(head);

    
}