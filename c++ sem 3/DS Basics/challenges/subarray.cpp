//WRITE ALL SUB ARRAYS OF YOUR ARRAY
#include<iostream>
using namespace std;
int main(){
    int s;
    int n=0;
    cout<<"enter the size of array: ";
    cin>>s;
    int arr[s];
    cout<<"\nenter your array element\n";
    for(int i=0;i<s;i++){
      cin>>arr[i];
    }
    cout<<"\narray: \n";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nSUB ARRAYS OF YOUR ARRAY\n\n";

    for(int k=0;k<s;k++){
        cout<<k+1<<". ";
      for(int i=n;i<s;i++){
          cout<<"{";
        for(int j=i;j<s;j++){
              cout<<arr[j]<<" ";
          }
          cout<<"} ";
        }
        cout<<"\n";
        n++;
    }
}