#include<iostream>
using namespace std;


	void insert(int arr[],int val) {          // INSERT FUNCTION
		int i=0;
		int count;
		while(arr[i]!=0){
			count+=1;
			i++;
		}
		int l2=count;
		for(int i=0;i<=count;i++){
			arr[l2]=arr[l2-1];
			l2--;
		}
		arr[0]=val;
		cout<<"\nelement inserted";
	}
	
	void delet(int arr[],int loc){            //DELETE FUNCTION
	  	    for(int i=loc-1;arr[i+1]!=0;i++){
	  		arr[i]=arr[i+1];
		  }
		int i=0;
		int count;
		while(arr[i]!=0){
			count+=1;
			i++;
		}
		arr[count-1]=0;
		  cout<<"\nelement deleted";
	}
	
	
	void showarr(int arr[]){               //SHOW FUNCTION TO PRINT ARRAY
		int i=0;
		cout<<"\nyour array is: ";
		while(arr[i]!=0){
			cout<<"\n"<<arr[i]<<" ";
			i++;
		}
	
	}

int main(){                              // MAIN FUNCTION
	int ar[100];
	int n,choice,element,del;
	cout<<"how many elements you want in your array: ";
	cin>>n;
	cout<<"enter the elements you want to store in your array: \n";
	for(int i=1;i<=n;i++){
		cout<<i<<".";
		cin>>ar[i-1];
	}
     while(true){                        // WHILE LOOP FOR RECURSION
     	cout<<"\n\n1.insert the element at starting: ";
     	cout<<"\n2.delete the element: ";
     	cout<<"\n3.show the array";
     	cout<<"\n4.exit";
     	cout<<"\nenter your choice: ";
     	cin>>choice;
     	if(choice==1){
     		cout<<"\nenter the element you want to insert: ";
     		cin>>element;
     		insert(ar,element);           // CALLING INSERT FUNCTION
		 }
		 else if(choice==2){
		 	cout<<"\nenter the place from where you want to delete the element: ";
		 	cin>>del;
		 	delet(ar,del);               // CALLING DELETE FUNCTION
		 }
		 else if(choice==3){
		 	
		 	showarr(ar);                 // CALLING SHOW FUNCTION
		 } 
		 
		 else if(choice==4){
		 	exit(1);                     // EXIT
		 }
	 }
    return 0;
}

