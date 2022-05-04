#include<iostream>
using namespace std;

 int main(){

     int arr[4][3];
     cout<<"enter the elements: \n";
     for(int i=0;i<4;i++){
         for(int j=0;j<3;j++){
             cout<<"row:"<<i+1<<" column:"<<j+1<<" :-";
             cin>>arr[i][j];
         }
     }
     cout<<"\nyour 2D- array is: \n";
     for(int i=0;i<4;i++){
         for(int j=0;j<3;j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<"\n";
     }

 }