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

void selectionsort(node* head){
    node* temp1=head;
    node* temp2=head->next;
    node* temp3=head;
    

    int n=0;
    while(temp3!=NULL){
        n+=1;
        temp3=temp3->next;
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(temp2->data<temp1->data){
                int temp=temp2->data;
                temp2->data=temp1->data;
                temp1->data=temp;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
        temp2=temp1->next;
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
    selectionsort(head);
    display(head);

}