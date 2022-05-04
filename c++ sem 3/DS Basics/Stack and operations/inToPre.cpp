// SAME LOGIC AS IN TO POST JUST REVERSE THE ORIGINAL EXPRESSION

#include<iostream>
#include<stack>
using namespace std;

int prec(char c){

    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='-' || c=='+'){
        return 1;
    }
    else{
        return -1;
    }
}

string revexp(string exp){
      string exp3="";
    for(int i=(exp.length()-1);i>=0;i--){
        if(exp[i]=='('){
            exp[i]=')';
            exp3+=exp[i];
        }
        else if(exp[i]==')'){
            exp[i]='(';
            exp3+=exp[i];
        }
        else{
            exp3+=exp[i];
        }
    }
    return exp3;
}

string intopost(string exp){

    string exp2=revexp(exp);
    stack <char> st;
    string result="";
    for(int i=0;i<exp2.length();i++){
        if(exp2[i]>='a' && exp2[i]<='z' || exp2[i]>='A' && exp2[i]<='Z'){
            result+=exp2[i];
        }
        else if(exp2[i]=='('){
            st.push(exp2[i]);
        }
        else if(exp2[i]==')'){
            while(!st.empty() && st.top()!='('){
                result+=st.top();
                st.pop();
            }
            if(!st.empty()){
            st.pop();
            }
        }
        else {
            while(!st.empty() && prec(st.top())>prec(exp2[i])){
                result+=st.top();
                st.pop();
            }
            st.push(exp2[i]);
        }
    }

    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    string fresult=revexp(result);
    cout<<fresult;
}

int main(){

    string exp="(a-b/c)*(a/k-l)";
    intopost(exp);
}