#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    int max=INT_MIN;
    int min=INT_MAX;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in your array:";
    for(int i=0;i<n;i++){
       cin>>arr[i];
      }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        } 
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"maximum element in the array: "<<max;
    cout<<"\nmininmun element in the array: "<<min;
}
