#include<iostream>
using namespace std;

void linearsearch(int arr[],int size,int value)
{
    int count=0;
for(int i=0;i<size;i++){
        if(arr[i]==value){
            cout<<"your element: "<<value<<"\nposition or index number: "<<i;
            count+=1;
        }
    }
    if(count==0){
        
            cout<<"your element is not in the array";
    }
}
int main(){
    int n,key;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in your array: \n";
    for(int i=0;i<n;i++){
       cin>>arr[i];
      }
    cout<<"enter the index of element you want to search: ";
    cin>>key;
    linearsearch(arr,n,key);
    
}      