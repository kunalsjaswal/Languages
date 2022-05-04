#include<iostream>
#include<stack>
using namespace std;

int prec(char c){

    if(c=='^'){
        return 3;
    }
    else if(c=='/' || c=='*'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else {
        return -1;
    }
}

string InToPost(string exp){
    stack <char> st;
    string result="";
    for(int i=0;i<exp.length();i++){
        
        if( (exp[i]>='a' && exp[i]<='z') || (exp[i]>='A' && exp[i]<='Z') ){
            result+=exp[i];
        }
        else if(exp[i]=='('){
            st.push(exp[i]);
        }
        else if(exp[i]==')'){
            while(!st.empty() && st.top()!='('){
                result+=st.top();
                st.pop();
            }
            if(!st.empty()){
            st.pop();
            }
        }
        else{
           while(!st.empty() && prec(st.top())>prec(exp[i])){
               result+=st.top();
               st.pop();
           }
           st.push(exp[i]);  //WHEN STACK IS EMPTY OR TOP OPERATOR IS SMALLER THAN EXP[I]
        }
    }

        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        cout<<result;
        
}


int main(){

    string exp="(a+b)*(a/c)";
    InToPost(exp);


}