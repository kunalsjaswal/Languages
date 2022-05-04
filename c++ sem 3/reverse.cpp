#include<iostream>
using namespace std;

void rev(int a,int b){
int rem;
int ra=0;
int rb=0;
while(a!=0){
    rem=a%10;
    ra=ra*10+rem;
    a=a/10;
}

while(b!=0){
    rem=b%10;
    rb=rb*10+rem;
    b=b/10;
}
a=rb;
b=rb;
}

void swap(int a,int b){
int temp=a;
a=b;
b=temp;
cout<<"after swapping and reversing"<<endl<<"a: "<<a<<" b: "<<b<<endl;
}

int main(){
    int a=2361;
    int b=1000;
    cout<<"before swapping and reversing"<<endl<<"a: "<<a<<" b: "<<b<<endl;
    rev(a,b);
    swap(a,b);
    return 0;
}