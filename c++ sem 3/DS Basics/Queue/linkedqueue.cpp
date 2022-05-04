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

class queue{
    public:
    node* front;
    node* tail;
    queue(){
        front=NULL;
        tail=NULL;
    }

    void enqueue(int val){
    node* n=new node(val);
    if(front==NULL){
        front=n;
        tail=n;
        return;
    }

    tail->next=n;
    tail=n;
}

void dequeue(){
    if(front==NULL or tail->next==front){
        cout<<"queue is underflow i.e., empty\n";
    }
    else{
        node* todel=front;
        front=front->next;
        delete todel;
    }
}

void peek(){
     if(front==NULL or tail->next==front){
        cout<<"queue is underflow i.e., empty\n";
    }
    else{
        cout<<"front element: "<<front->data<<"\n";
    }
}

void display(){
    node* temp=front;
    cout<<"front->";
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<tail->data;
    cout<<"<-end\n";
}

};



int main(){
    queue Q;
    Q.enqueue(3);
    Q.enqueue(1);
    Q.enqueue(7);
    Q.enqueue(11);
    Q.enqueue(6);
    Q.peek();
    Q.display();
    Q.dequeue();
    Q.display();
}