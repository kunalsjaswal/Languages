//IN THIS YOU HAVE TO FIND THE MAX ELEMENT IN AN ARRAY LIKE
// ARRAY={2,5,7,3,1,4};
//NOW MAX TILL 3rd INDEX IS: 7
//MAX TILL 1th INDEX IS:5

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[10]={3,7,1,5,23,9,6,31,11,23};
    cout<<"array: \n";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    int n,max;
    cout<<"\nTo find max from start to your index\nenter the index: ";
    cin>>n;
    max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    cout<<"maximum element till "<<n<<" index is: "<<max;
}
