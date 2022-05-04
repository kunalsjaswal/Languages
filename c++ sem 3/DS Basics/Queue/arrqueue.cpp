#include<iostream>
#define size 10
using namespace std;
class queues{
    public:
    int Que[size];
    int head=-1;
    int tail=-1;
    public:

    void enqueue(int val){
        if(tail==size-1){
            cout<<"queue is overflow cannot add values\n";
        }
        else{
           tail++;
           Que[tail]=val;
        }

        if(head==-1){
            head++;
        }
    }

    void dequeue(){
        if(head==-1 or head>tail){
            cout<<"queue is underflow cannot delete element\n";
        }
        else{
            Que[head]={};
            head++;
        }
    }

    void display(){
        cout<<"front->";
        for(int i=head;i<=tail;i++){
            cout<<Que[i]<<" ";
        }
        cout<<"<-end";
    }

    void peek(){

        if(head==-1){
            cout<<"queue is empty no front element\n";
        }
        else{
        cout<<"front value of queue is: "<<Que[head]<<"\n";
        }
    }
};

int main(){
    queues Q;
    Q.enqueue(1);
    Q.enqueue(11);
    Q.enqueue(4);
    Q.enqueue(2);
    Q.enqueue(8);
    Q.enqueue(5);
    Q.enqueue(6);
    Q.dequeue();
    Q.peek();
    Q.display();
    
}

