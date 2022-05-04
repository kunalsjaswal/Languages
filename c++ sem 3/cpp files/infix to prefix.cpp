#include<iostream>
#include<stack>                                      // INCLUDING STACK FOR USING PUSH(),POP(),EMPTY FUNCTIONS
#include<algorithm>                                  // INCLUDING ALGORITHM LIBRARY FOR USING REVERSE FUNCTION
using namespace std;
 
int prec(char c){                                    // PRECEDENCE FUNCTION TO SPECIFY OPERATORS PREFRENCE
	if(c=='^'){
		return 3;
	}
	else if(c=='/' || c=='*'){
		return 2;
	}
	else if(c=='+' || c=='-'){
		return 1;
	}
	else{
		return -1;
	}
}

string intopre(string s){                            // INTOPRE FUNCTION TO ENTER  THE INFIX EXPRESSION AND CONVERT INTO  PREFIX
	reverse(s.begin(),s.end());                      // TRAVERSING THE EXPRESSION IN REVERSE ORDER. i.e., REVERSE OF POSTFIX IS PREFIX
	stack<char> st;
	string result;
	for(int i=0;i<s.length();i++){              
		if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
			result+=s[i];
		}
		else if(s[i]==')'){
			st.push(s[i]);
		}
		else if(s[i]=='('){
			while(!st.empty() && st.top()!=')'){
			
			result+=st.top();
			st.pop();
	        }
	        if(!st.empty()){
	        	st.pop();
			}
		}
		else{
			while(!st.empty() && prec(st.top())>=prec(s[i])){
				result+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}  
	while(!st.empty()){
		result+=st.top();
		st.pop();
	}
	reverse(result.begin(),result.end());
	return result;
}
int main(){                                                                 // MAIN FUNCTION
	int choice;         
	cout<<"enter the expression for infix only: ";
	string ex;
	cin>>ex;
	cout<<"your infix to prefix is: "<<intopre(ex);                         //CALLING THE INTOPRE FUNCTION
	
	while(true){                                                            // WHILE LOOP FOR ASKING USER CHOICE 
		cout<<"\n1. another try!!?";
		cout<<"\n2. exit!";
		cout<<"\nenter your choice:";
		cin>>choice;
		if(choice==1){
			cout<<"\nenter the expression for infix only: ";
			cin>>ex;
			cout<<"your infix to prefix is: "<<intopre(ex);
		}
		else if(choice==2){
			exit(1);
		}
		else{
			cout<<"\nenter a valid option";
		}
	}
	
}
