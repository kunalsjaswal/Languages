#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];       //MAKING 2 TEMPORARY VARIABLE
    int b[n2];

    for(int i=0;i<n1;i++){          //VALUE ENTERING IN TEMPORORY VARIABLE
        a[i]=arr[l+i];

    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }
    }

   while(i<n1){
       arr[k]=a[i];
       k++;
       i++;
   }
   while(j<n2){
       arr[k]=b[j];
       j++;
       k++;
   }

}

void mergesort(int arr[],int l,int r){
if(l<r){
    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);

    merge(arr,l,mid,r);
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
      mergesort(arr,0,n-1);
      sorted(arr,n);



}