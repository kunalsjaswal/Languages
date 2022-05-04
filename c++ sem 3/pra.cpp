#include <iostream>

using namespace std;

class node{

  public:

  int data;

  node* next;

  node(int d){

    data=d;

    next=NULL;

  }

};



struct Queue{     // creation of queue



  node *front,*rear;

  Queue(){

  front=rear=NULL;

  }

   

void enQueue(int x){



  node* temp=new node(x);

  if(rear==NULL){

    rear=front=temp;

  }

  rear->next=temp;

  rear=temp;

   

}



 void dequeue(){

   if(front==NULL){

     return;

   }

   node* temp=front;

   front=front->next;

   if(front==NULL){

     rear=NULL;

     delete(temp);

   }

 }

 void printq(){

   node* temp=front;

   cout<<"(front)-";

   while(temp!=NULL){

     cout<<temp->data<<"-";

     temp=temp->next;

   }

   cout<<"(rear)";

 }

};

int main()

{

  int n=1;

  int i;

  Queue q;

  q.enQueue(21);

  q.enQueue(41);

  q.enQueue(12);

  q.enQueue(16);

  q.enQueue(22);

  q.enQueue(39);

  q.enQueue(66);

  cout<<"our queue is: ";

  q.printq();

  cout<<"\nfront: "<<(q.front)->data;

  cout<<"\nrear: "<<(q.rear)->data;

  cout<<"\nenter the number of times you want to delete: ";
  cin>>i;
  while(n<=i){
   q.dequeue();
   n++;
  }
  cout<<"new queue is: ";
  q.printq();
  cout<<"\nfront: "<<(q.front)->data;
  cout<<"\nrear: "<<(q.rear)->data;
  return 0;
}