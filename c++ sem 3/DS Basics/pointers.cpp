#include<iostream>
using namespace std;
int main(){

    int a=20;
    int* aptr=&a;   //int *ptr = int* ptr
    cout<<"value of &a: "<<&a;
    cout<<"\nvalue of aptr: "<<aptr;
    cout<<"\nvalue of &aptr: "<<&aptr;
    cout<<"\nvalue of *aptr: "<<*aptr;
    
    *aptr=30;
    cout<<"\nvalue of *aptr: "<<*aptr;
    cout<<"\nvalue of a: "<<a;

    aptr++;
    cout<<"\nvalue of aptr: "<<aptr;
}