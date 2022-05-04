#include<iostream>
#include<vector>
using namespace std;

int main(){
    //VECTOR WITHOUT SIZE AND ELEMENTS
     vector<int> v1;           //VECTOR 1
     vector<int> v2(3,50);     //VECTOR 2
     vector<int> v3;           //VECTOR 3
     vector<int> v4;           //VECTOR 4
     vector<int>::iterator it; //ITERATOR IS A POINTER
     v1.push_back(1);
     v1.push_back(2);
     v1.push_back(3);
     v1.push_back(8);
     v1.push_back(12);
     v1.push_back(5);
     v1.push_back(4);
     v1.pop_back();


     int arr[]={123,5,1,8,3};
     it=v1.begin()+1; 
     v3.assign(it,v1.end()-2);   //ASSIGNING mid 3 values excluding 1st and last 3 elements
     v4.assign(arr,arr+5);
     cout<<"size of v1: "<<v1.size()<<endl<<"size of v2: "<<v2.size()<<endl;
     cout<<"size of v3: "<<v3.size()<<endl<<"size of v4: "<<v4.size()<<endl;

     // AT function --  v3.at(i) == v3(i)
     // cout<<v1[3]<<" "<<v1.at(3);   same output i.e., 8
     
     for(int i=0;i<v1.size();i++){   //ONE WAY OF ITERATING THE VECTOR
         cout<<v1[i]<<" ";
     }
     cout<<endl;

         
     for(it=v2.begin();it!=v2.end();it++){    //USING ITERATOR
         cout<<*it<<" ";                      //*it BECAUSE 'it' IS POINTER
     }
     cout<<endl;

     v1.pop_back();
     for(auto element:v1){      //USING AUTO 
         cout<<element<<" ";
     }cout<<endl;

     swap(v1,v2);     //SWAPPING 2 VECTORS VALUE
     for(auto element:v1){     
         cout<<element<<" ";
     }cout<<endl;

     for(auto element:v2){      
         cout<<element<<" ";
     }cout<<endl;

     
     
     sort(v2.begin(),v2.end());
     for(auto element:v2){      
         cout<<element<<" ";
     }cout<<endl;

}