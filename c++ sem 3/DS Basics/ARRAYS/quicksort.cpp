#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int l,int r){

   int pivot=arr[r];
   int i=l-1;
   for(int j=l;j<r;j++){

      if(arr[j]<pivot){
          i++;
          swap(arr,i,j);
      }
   }
   swap(arr,i+1,r);    
   return i+1;
}

void quicksort(int arr[],int l,int r){

    if(l<r){

    int pi=partition(arr,l,r);
    quicksort(arr,l,pi-1);
    quicksort(arr,pi+1,r);

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
int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in your array: \n";
    for(int i=0;i<n;i++){
       cin>>arr[i];
      }
    
    unsorted(arr,n);
    quicksort(arr,0,n-1);
    sorted(arr,n);
}