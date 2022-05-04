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

void bubblesort(node* head){
     int n=0,iteration=1;
     node* temp=head;
     node* temp2=head;
     
     while(temp2!=NULL){
         n+=1;
         temp2=temp2->next;     
     }
     while(iteration<n){
         for(int i=0;i<n-iteration;i++){
             if(temp->data>temp->next->data){
                 int tem=temp->next->data;
                 temp->next->data=temp->data;
                 temp->data=tem;
             }
             temp=temp->next;
         }
         temp=head;
         iteration++;
     }
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
    cout<<"before sorting";
    display(head);
    cout<<"\nafter selection sorting";
    bubblesort(head);
    display(head);

}