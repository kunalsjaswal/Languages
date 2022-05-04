#include<iostream>
#include<time.h>
using namespace std;
string name;
long long int phone;
time_t my_time=time(NULL);


void totalpa(int total,string name,long long int phone,string ice[5],int price[5],int num[10],int num2[10]){
    int i=0;
    system("cls");
    cout<<"\t\t_________________________________________________________"<<endl;
    cout<<"\t\t\t##################################"<<endl;
    cout<<"\t\t\t#WELCOME TO ICE-CREAM CORNER SHOP#"<<endl;
    cout<<"\t\t\t##################################\n\n"<<endl;
    cout<<"\t\t\t   $$$$$ YOUR PAYMENT $$$$$\n"<<endl;
    cout<<"\t\tName: "<<name<<"\t\t\t\tMobile: "<<phone<<endl;

    cout<<"\n\t\t_____________________________________________________"<<endl;
    cout<<"\t       |S.No. |ice-cream\t       |cost |item|total cost|"<<endl;
    cout<<"\t       |______|________________________|_____|____|__________|"<<endl;
    while(num[i]>0 && num[i]<100){
        
        cout<<"\t       |"<<i+1<<"     |"<<ice[num[i]-1]<<"  \t       |"<<price[num[i]-1]<<"  |  "<<num2[i]<<" |"<<num2[i]<<"x"<<
        price[num[i]-1]<<"     |"<<endl;
        i++;
    }
    cout<<"\t       |______|________________________|_____|____|__________|"<<endl;

    cout<<"\n\n\t\tTOTAL COST: $"<<total<<"\t\t"<<ctime(&my_time)<<endl;
    cout<<"\n\t\t  vpo-bhapoo\t\t\thave an ice cream\n\t\t  teh-indora\t\t\t  to chill your\n\t\t  dist-kangra\t\t\t     BRAIN"<<endl;
   cout<<"\t\t_________________________________________________________"<<endl;
   cout<<"\n\t\tTHANK YOU FOR COMING :-)";
   exit(0);
}


void flavour(){
    string ice[5]={"vanilla","chocolate","strawberry","butterscotch","tuti fruity"};
    int price[5]={120,140,160,130,180};
    int num[10];
    int num2[10];
    int ch,n;
    int total=0;
    int j=0;

    system("cls");
    cout<<"\t\t##################################"<<endl;
    cout<<"\t\t#WELCOME TO ICE-CREAM CORNER SHOP#\t\t\t"<<ctime(&my_time);
    cout<<"\t\t##################################"<<endl;
    
    cout<<"\t\t\t _______________________________________________"<<endl;
    cout<<"\t\t\t|\tS.No. |\tFlavours\t\t| price\t|"<<endl;
    cout<<"\t\t\t|_____________|_________________________|_______|";
    cout<<endl;
    for(int i=0;i<5;i++){
        if(i==0){
            cout<<"\t\t\t|\t"<<i+1<<"     |\t"<<ice[i]<<"\t\t\t| "<<price[i]<<" \t|"<<endl;
        }
        else{
        cout<<"\t\t\t|\t"<<i+1<<"     |\t"<<ice[i]<<"\t\t| "<<price[i]<<" \t|"<<endl;
        }
    }
    cout<<"\t\t\t|_____________|_________________________|_______|"<<"\t\tpress 0 for exit"<<endl;
    cout<<"\n\n";
    while(true){
        cout<<"\t\t\tselect the ice cream: ";
        cin>>ch;
        if(ch==0){
            system("cls");
            cout<<"thank you!! visit again please :-)"<<endl;
            goto cll;
        }
        cout<<"\t\t\tnumber of ice creams: ";
        cin>>n;
        cout<<endl;

       if(ch==1){
            total=total+(n*price[ch-1]);
            num[j]=ch;
            num2[j]=n;
            j++;
        }
        else if(ch==2){
            total=total+(n*price[ch-1]);
            num[j]=ch;
            num2[j]=n;
            j++;
        }
        else if(ch==3){
            total=total+(n*price[ch-1]);
            num[j]=ch;
            num2[j]=n;
            j++;
        }
        else if(ch==4){
            total=total+(n*price[ch-1]);
            num[j]=ch;
            num2[j]=n;
            j++;
        }
        else if(ch==5){
            total=total+(n*price[ch-1]);
            num[j]=ch;
            num2[j]=n;
            j++;
        }
    }

    cll:
    system("cls");
      totalpa(total,name,phone,ice,price,num,num2);
      
      
}

void selection(){
    cout<<"\t\t##################################"<<endl;
    cout<<"\t\t#WELCOME TO ICE-CREAM CORNER SHOP#\t\t\t"<<ctime(&my_time);
    cout<<"\t\t##################################"<<endl;
    int ch;

    while(true){
        cout<<"\t\t\t1.select ice-cream "<<endl;
        cout<<"\t\t\t2.exit"<<endl;
        
        cout<<"\n\t\t\tchoice: ";
        cin>>ch;

        if(ch==1){
            flavour();
        }
        else if(ch==2){
            system("cls");
            cout<<"thank you!! visit again please :-)"<<endl;
            exit(0);
        }
        else {
            system("cls");
            cout<<"invalid choice :-("<<endl;
            selection();
        }
        
    }

}
int main(){
    
    cout<<"\t\t##################################"<<endl;
    cout<<"\t\t#WELCOME TO ICE-CREAM CORNER SHOP#\t\t\t"<<ctime(&my_time);
    cout<<"\t\t##################################\n\n"<<endl;
    cout<<"\t\t\tEnter your Name: ";
    cin>>name;
    cout<<"\t\t\tEnter your number: ";
    cin>>phone;
    system("cls");
    
    selection();
    
}