#include <iostream>
using namespace std;
class node{                               // CREATION OF A NODE
  public:
  int data;
  node* next;
  node(int d){
    data=d;
    next=NULL;
  }
};



struct Queue{                              // creation of queue
  node *front,*rear;
  Queue(){
  front=rear=NULL;
  }


void enQueue(int x){                       //DEFINING ENQUEUE OPERATION
  node* temp=new node(x);
  if(rear==NULL){
    rear=front=temp;
  }
  rear->next=temp;
  rear=temp;
}
 void dequeue(){                           // DEFINING DEQUEUE OPERATION
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
 void printq(){                           // FUNCTION FOR PRINTING OUR QUEUE
   node* temp=front;
   cout<<"(front)-";
   while(temp!=NULL){
     cout<<temp->data<<"-";
     temp=temp->next;
   }
   cout<<"(rear)";
 }
};
int main()                                // MAIN FUNTION
{
  int n=1;
  int i;
  Queue q;
  q.enQueue(21);                          //CALLING ENQUE OPERATION
  q.enQueue(41);
  q.enQueue(12);
  q.enQueue(16);
  q.enQueue(22);
  q.enQueue(39);
  q.enQueue(66);
  q.enQueue(51);
  q.enQueue(21);
  q.enQueue(91);
  cout<<"our queue is: ";
  q.printq();

  }
