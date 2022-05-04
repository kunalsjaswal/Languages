#include<iostream>
using namespace std;

void push(int arr[],int val){
    int i=0;
    
    while(arr[i]!=0){
        i++;
    }
    arr[i]=val;
}

void pop(int arr[]){
    int i=0;
    while(arr[i]!=0){
        i++;
    }
    arr[i-1]={};
}

void display(int arr[])
{
    int i=0;
    int counter=0;
    while(arr[i]!=0){
        counter+=1;
        i++;
    }
    cout<<"\nstack is\n";
    for(int j=counter-1;j>=0;j--){
        cout<<arr[j]<<"\n";
    }
}

void peek(int arr[]){
    int i=0;
    
    while(arr[i]!=0){
        i++;
        
    }
    cout<<"top value of stack is:- "<<arr[i-1];
}

int main(){

    int starray[100]={};
    push(starray,4);
    push(starray,1);
    push(starray,2);
    push(starray,7);
    display(starray);
    peek(starray);
    pop(starray);
    display(starray);
    peek(starray);

}