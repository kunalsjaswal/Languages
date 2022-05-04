#include<iostream>
using namespace std;
int main(){
    int roll_no[10],marks[10];
    string name[10];

    for(int i=0;i<5;i++){
        roll_no[i]=i+1;
    }

    cout<<"enter the names and marks of students"<<endl;
    for(int i=0;i<5;i++){
        cout<<"roll no "<<i+1<<endl;
        cout<<"name: ";
        cin>>name[i];
        cout<<"marks: ";
        cin>>marks[i];
        cout<<endl;
    }

    system("cls");
    cout<<"################# STUDENT RECORD ################"<<endl;
    cout<<" _______________________________________________"<<endl;
    cout<<"|\tRoll No. |\tName\t\t| Marks\t|"<<endl;
    cout<<"|________________|______________________|_______|"<<endl;

    for(int i=0;i<5;i++){

        cout<<"|\t"<<roll_no[i]<<"\t |\t"<<name[i]<<"\t\t| "<<marks[i]<<"\t|"<<endl;
    }
    cout<<"|________________|______________________|_______|"<<endl;

}
