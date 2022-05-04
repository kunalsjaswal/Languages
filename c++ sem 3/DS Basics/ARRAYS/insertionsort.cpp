#include<iostream>
using namespace std;

void inesrtionsort(int arr[],int n){
  for(int i=1;i<n;i++){
      int current=arr[i];
      int j=i-1;
      while(arr[j]>current && j>=0){
          arr[j+1]=arr[j];
          j--;
      }
      arr[j+1]=current;
  }
}

void unsorted(int arr[],int n){
 cout<<"\nyour unsorted array is: \n";
 for(int i=0;i<n;i++)
 {
   cout<<arr[i]<<" ";
 }
}

void sorted(int arr[],int n){
 cout<<"\nyour sorted array is: \n";
 for(int i=0;i<n;i++)
 {
   cout<<arr[i]<<" ";
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

      unsorted(arr,n);
      inesrtionsort(arr,n);
      sorted(arr,n);
}