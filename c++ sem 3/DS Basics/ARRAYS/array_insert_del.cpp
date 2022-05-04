#include<iostream>
using namespace std;

void insert(int arr[],int val,int index){

    int count=0,i=0,l=0;
    while(arr[i]!=0){
        count+=1;
        i++;
    }
    if(index>count){

        cout<<"\nplease enter valid index number.\n";

    }
    else{
    for(int j=count;j>index;j--){
        arr[j]=arr[j-1];
    }

    arr[index]=val;
    cout<<"element inserted successfully\n";
    cout<<"array after insertion\n";
    while(arr[l]!=0){
        cout<<arr[l]<<" ";
        l++;
    }
    cout<<"\n";
 }
    
}

void del(int arr[],int val){
    int count=0,i=0,dup=0,choice,z=0,l=0;
    int index[10];
    while(arr[i]!=0){
        count+=1;
        i++;
    }

    for(int j=0;j<count;j++){
        if(arr[j]==val){
           dup+=1;
           index[l]=j;
           l++;
        }
    }

    if(dup==1){
        int ind=index[0];
        if(ind==count-1){   // FOR LAST ELEMENT

            arr[ind]={};
 
        }
        else{

        for(int j=ind;j<count-1;j++){
            arr[j]=arr[j+1];
            
          }
          arr[count-1]={};
        }
        
    }
    else if(dup>1){
        cout<<"there are duplicates of your number.\nplease choose(1,2,3,..): ";
        cin>>choice;
        int ind1=index[choice-1];
        if(choice==count-1){
            arr[choice]={};
       
        }
        else{

        for(int j=ind1;j<count-1;j++){
            arr[j]=arr[j+1];
           }
        arr[count-1]={};
        }
    }
    
    cout<<"successfully deleted!!!!!\n";
    cout<<"array after deletion\n";
   for(int j=0;j<count-1;j++){
       cout<<arr[j]<<" ";
   }
    cout<<"\n";


}

void show(int arr[]){
    int i=0;
    cout<<"your array\n";
    while(arr[i]!=0){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<"\n";
}

int main(){
    int arr[100]={3,7,1,7,5,4};
    
    cout<<"your initial array is: \n";
    int i=0,ch,val,index,val2;


    while(arr[i]!=0){
        cout<<arr[i]<<" ";
        i++;
    }

    while(true){
        cout<<"\n1. insert the element";
        cout<<"\n2. delete the element";
        cout<<"\n3. show my array";
        cout<<"\n4. exit";
        cout<<"\nenter the choice: ";
        cin>>ch;
        if(ch==1){
            cout<<"enter the element: ";
            cin>>val;
            cout<<"enter the index: ";
            cin>>index;
            insert(arr,val,index);
        }
        else if(ch==2){
            cout<<"enter the element: ";
            cin>>val2;
            del(arr,val2);
        }
        else if(ch==3){
            show(arr);
        }
        else if(ch==4){
            exit(1);
        }
        else{
            cout<<"please enter the valid choice";
        }
    }

}