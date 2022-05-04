#include<iostream>
#include<windows.h>

#include<time.h>
using namespace std;

int clockk(){
    int h,m,s,a,err;
    h=m=err=a=s=0;

    time_t my_time=time(NULL);

    while(a==0){
        system("cls");
        cout<<"current time: "<<ctime(&my_time);
        cout<<"\t\t\t----------"<<endl;
        cout<<"\t\tClock\t| "<<h<<":"<<m<<":"<<s<<endl;
        cout<<"\t\t\t----------"<<endl;
        s++;
        Sleep(1000);
        if(s>59){
            s=0;
            m++;
        }
        if(m>59){
            m=0;
            h++;
        }
        if(h>24){
            h=0;
        }
    }
    return 0;
}
int timer(){
    
    int h,m,s,a,err;
    err=a=0;
    system("cls");
    while(err==0){
    cout<<"time period you want in your clock"<<endl;
    cout<<"hours: ";
    cin>>h;
    cout<<"minutes: ";
    cin>>m;
    if(h<24 && m<60){
        err++;
    }
    else{
        system("cls");
    }
    }
    
    m--;
    s=59;

    while(a==0){
        system("cls");
        cout<<"######"<<endl;
        cout<<h<<":"<<m<<":"<<s<<endl;
        Sleep(1000);
        s--;
        if(s==-1){
            s=59;
            m--;
        }
        if(m==-1){
            m=59;
            
            if(h==0){
              system("cls");
              cout<<"time is up!";
              return 0;
              }
            else{
                h--;
            }
        }
    }
    return 0;
}
int main(){
    int ch;
    cout<<"what you want ? "<<endl;
    cout<<"1.timer\n2.clock"<<endl;
    cin>>ch;

    if(ch==1){
        timer();
    }
    else if(ch==2){
    clockk();
    }
    else{
        cout<<"please enter valid option";
    }
    

}