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

class deque{
    public:
    node* head;
    node* tail;
    deque(){
        head=tail=NULL;
    }  

    void insertatfront(int val){
        node* n=new node(val);
        if(head==NULL){
            tail=n;
            head=n;
            return;
        }

        head->prev=n;
        n->next=head;
        head=n;
    }

    void insertattail(int val){
        node* n=new node(val);
        if(head==NULL){
            tail=n;
            head=n;
            return;
        }
        tail->next=n;
        n->prev=tail;
        tail=n;
    }

    void delfront(){
        node* temp=head;
        if(head==NULL){
            cout<<"deque is underflow.\n";
            return;
        }
        head=temp->next;
        head->prev=NULL;
        delete temp;
    }

    void deltail(){
        if(tail==NULL){
            cout<<"deque is underflow.\n";
            return;
        }
        node* temp=tail;
        tail=temp->prev;
        tail->next=NULL;
        delete temp;
    }

    void display(){
        if(head==NULL){
            cout<<"deque is underflow\n";
            return;
        }
        node* temp=head;
        cout<<"front->";
        while(temp->next!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<tail->data<<"<-end";
    }

    void peek(){
        if(head==NULL){
            cout<<"deque is underflow\n";
            return;
        }
        cout<<"peek element: "<<head->data<<"\n";
    }
};

int main(){
    //THERE ARE TWO TYPES OF DEQUE--
    //INPUT RESTRICTED- IN THIS ONLY ONE insert function is allowed i.e., either insertatfront or insertattail
    //OUTPUT RESTRICTED - IN THIS ONLY ONE deletion FUNCTION IS ALLOWED i.e., either delfront()  or deltail()
    DQ.insertatfront(4);
    DQ.insertatfront(3);
    DQ.insertatfront(2);
    DQ.insertatfront(1);
    DQ.insertattail(5);
    DQ.insertattail(6);
    DQ.insertattail(7);
    DQ.delfront();
    DQ.deltail();
    DQ.peek();
    DQ.display();

}
