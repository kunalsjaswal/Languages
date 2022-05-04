#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    int iteration=1;
    while(iteration<n){   // if n elements in array.. then n-1 iterations
        for(int i=0;i<n-iteration;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
     iteration++;
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
    bubblesort(arr,n);
    sorted(arr,n);
      

}     