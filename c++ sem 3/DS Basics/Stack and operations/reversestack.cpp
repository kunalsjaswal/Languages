#include<iostream>
#include<stack>
using namespace std;

void revsentence(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void revword(string s){
    stack <string> st2;
    string word;
    for(int i=0;i<s.length();i++){
        word="";
        word+=s[i];
        st2.push(word);
    }

    while(!st2.empty()){
        cout<<st2.top();
        st2.pop();
    }
}

void revstack(){
    stack <int> s1;
    stack <int> s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }

    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }

    


}

int main(){
    string s="hello kunal!! how are you?";
    string w="Kunal";
    
    
    revsentence(s);
    cout<<"\nyour word '"<<w<<"' :- ";
    revword(w);
    cout<<"\n";
    revstack();
}