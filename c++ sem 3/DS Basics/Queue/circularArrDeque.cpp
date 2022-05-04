#include<iostream>
#define N 5
using namespace std;

class deque{
    public:
    int arr[N];
    int front=-1;
    int tail=-1;

    void insertatfront(int val){
        if((front==0 && tail==N-1) || (tail+1==front)){
            cout<<"deque is full\n";
        }
        else if(front==-1){
            front++;
            tail++;
            arr[front]=val;
        }
        else if(front==0){
            front=N-1;
            arr[front]=val;
        }
        else{
            front--;
            arr[front]=val;
        }

    }

    void insertattail(int val){
       if((front==0 && tail==N-1) || (tail+1==front)){
            cout<<"deque is full\n";
        }
        else if(tail==-1){
            front++;
            tail++;
            arr[tail]=val;
        }
        else if(tail==N-1){
            tail=0;
            arr[tail]=val;
        }
        else{
            tail++;
            arr[tail]=val;
        }
    }

    void delfront(){
        if(front==-1){
            cout<<"deque is underflow\n";
        }
        else if(front==tail){
            arr[front]={};
            front=tail=-1;
        }
        else if(front==N-1){
            arr[front]={};
            front=0;
        }
        else{
            arr[front]={};
            front++;
        }
    }
    
    void deltail(){
        if(tail==-1){
            cout<<"deque is underflow\n";
        }
        else if(front==tail){
            front=tail=-1;
        }
        else if(tail==0){
            arr[tail]={};
            tail=N-1;
        }
        else{
            arr[tail]={};
            tail--;
        }
    }


    void display(){
        int i=front;
        cout<<"front->";
        while(i!=tail){
            if(arr[i]>0){
            cout<<arr[i]<<" ";
            i=(i+1)%N;
            }
        }
        cout<<arr[tail]<<"<-end"<<"\n";
    }

    void peek(){
       if(front==-1){
           cout<<"queue is underflow.\n";
       }
       else{
           cout<<"peek element: "<<arr[front]<<"\n";
       }

    }
};


int main(){
    deque DQ;
    DQ.insertatfront(2);
    DQ.insertatfront(1);
    DQ.insertattail(3);
    DQ.insertattail(4);
    DQ.insertattail(5);
    DQ.delfront();
    DQ.deltail();
    DQ.display();

    preorder(root);
}