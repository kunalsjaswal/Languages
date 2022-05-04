#include<iostream>
#define N 10
using namespace std;

class cqueue{
    public:
    int que[N];
    int front=-1;
    int rear=-1;

    void enqueue(int val){
        if(front==-1){
            front++;
            rear++;
            que[rear]=val;
            
        }
        else if(((rear+1)%N)==front){
            cout<<"queue is overflow.\n";
        }
        else{
        rear=(rear+1)%N;
        que[rear]=val;
        }
        
    }
    

    void dequeue(){
        if(front==-1){
            cout<<"queue is underflow\n";
            return;
        }
        que[front]={};
        front=(front+1)%N;
    }

    void display(){
        int i=front;
        cout<<"front->";
        while(i!=rear){
            cout<<que[i]<<" ";
            i=(i+1)%N;
        }
        cout<<que[rear]<<"<-end";
    }
    void peek(){
       if(front==-1){
           cout<<"queue is underflow.\n";
       }
       else{
           cout<<"peek element: "<<que[front]<<"\n";
       }

    }

};

int main(){

    cqueue Q;
    Q.enqueue(3);
    Q.enqueue(1);
    Q.enqueue(7);
    Q.enqueue(31);
    Q.enqueue(21);
    Q.enqueue(61);
    Q.enqueue(12);
    Q.enqueue(41);
    Q.enqueue(22);
    Q.enqueue(44);
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.enqueue(3);
    Q.enqueue(1);
    Q.enqueue(7);
    Q.peek();
    Q.display();

}