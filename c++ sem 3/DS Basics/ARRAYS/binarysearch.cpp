#include<iostream>
using namespace std;

void binarysearch(int arr[],int n,int key){    // function for binary search
int s=0;
int e=n;
int count=0;
while(s<=n){
    int mid=(s+e)/2;
    if(arr[mid]==key){
        cout<<"your element: "<<key<<"\nposition or index: "<<mid;
        count+=1;
        exit(1);
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
if(count==0){
    cout<<"your element is not present in the array";
 }
}

int main(){
    int n,key;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in your array:";
    for(int i=0;i<n;i++){
       cin>>arr[i];
      }
    cout<<"enter the index of element you want to search: ";
    cin>>key;  
    binarysearch(arr,n,key);             //calling the funtion


}