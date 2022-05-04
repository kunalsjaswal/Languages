#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
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
    selectionsort(arr,n);
    sorted(arr,n);
}   