#include<iostream>
using namespace std;
# define n 100                           // defining n value as final
class stack{                            // stack class
	public:
	string* arr;
	int top,temptop;
	public:
		stack(){                        //constructor 
			arr=new string[n];
			top=-1;
		}
		void push(string x){              //push function to insert elements in stack
			if(top==n-1){              // stack overflow condition
				cout<<"\nstack overflow. stack is full!!! please delete first to enter new element";
				return;
			}
			top++;
			arr[top]=x;
		}
		
		void pop(){                   // pop function top delete elements from stack
			if(top==-1){              // underflow condition
				cout<<"\nstack underflow. stack is emply. cannot delete anything.";
                return;			
			}
			top--;
		}
		
		void topfn(){                 // top function to get the top most element name
			if(top==-1){
				cout<<"\nno student in stack!! enter the names of some students";
                return;			
			}
			cout<<"\ntop element is: "<<arr[top];
			
		}
		
		bool empty(){                // empty function to check our stack is empty or not
			if(top==-1){
				cout<<"\nyour stack is empty.";
			}
			else{
				cout<<"\nyour stack is not empty.";
			}
		}
		
		void format(){               //format function to erase all data from stack 
			while(top!=-1){
				top--;
			}
		}
		void show(){                // show function to show every element of the stack
			temptop=top;            // assigning temporary top value to temptop
			if(temptop==-1){ 
				cout<<"nothing to show!! please insert the student names.";
			}
			else{
			
			cout<<"\nall students name: \n";
			while(temptop!=-1){
				cout<<arr[temptop]<<"\n";
				temptop--;
				
			}
		}
			
	}
	
};


int main(){                                  //main function
	int choice;
	string s;
	stack student;
	while(true){                             //while loop for choosing again and again
		cout<<"\n\n1. push() - to enter student name.";
		cout<<"\n2. pop()- to delete the name of student.";
		cout<<"\n3. empty()- to check whether our stack is empty or not.";
		cout<<"\n4. top()- to extract the top element of our stack";
		cout<<"\n5. format()- to delete whole record of student. make the stack empty";
		cout<<"\n6. show()- to print all students in stack.";
		cout<<"\n7. exit()- to exit.";
		cout<<"\nenter the choice: ";
		cin>>choice;
		if(choice==1){
			cout<<"\nenter student name you want to enter: ";
			cin>>s;
			student.push(s);
			cout<<"\nsuccessfully added student name.";
		}
		else if(choice==2){
			student.pop();
			cout<<"\nstudent name is deleted successfully.";
		}
		else if(choice==3){
			student.empty();
		}
		else if(choice==4){
			student.topfn();
		}
		else if(choice==5){
			student.format();
			cout<<"\nyour stack is empty";
		}
		else if(choice==6){
			student.show();
		}
		else if(choice==7){
			exit(0);
		}
		else{
			cout<<"please enter the valid choice.";
		}
	}
	
	
}
