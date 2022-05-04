#include<iostream>
#include<fstream>
using namespace std;

int leng(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int main(){
    int a=82741;
    int rev=0;
    int rem;
    string num=to_string(a);
    cout<<num.length()<<endl<<leng(a)<<endl;
    while(a!=0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    cout<<rev;

}