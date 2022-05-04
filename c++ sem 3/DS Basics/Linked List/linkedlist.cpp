#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertatTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    if(head==NULL){               //IF LIST IS EMPTY
        head=n;
        return;
    }

    while(temp->next!=NULL){    // TO REACH AT END OF THE LIST
        temp=temp->next;
    }

    temp->next=n;
}

void insertatIndex(node* &head,int val,int index){
    node* n=new node(val);
    node* temp=head;
    node* ref=temp;
    for(int i=2;i<index;i++){
        temp=temp->next;
    }
    ref=temp->next;
    temp->next=n;
    n->next=ref;
}

void insertatHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void search(node* head,int val){
    node* temp=head;
    int counter=0,ind=0;
    while(temp!=NULL){
        if(temp->data==val){
            counter+=1;
            cout<<"\nyour value "<<val<<" is at "<<ind<<" index";
        }
        ind++;
        temp=temp->next;
    }
    if(counter==0){
        cout<<"\nyour value is not in the linked list";
    }
}


void deletebyval(node* &head,int val){
    node* temp=head;
    if(head==NULL){
        cout<<"\nyour linked list is empty";
    }
    
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
}

void deletebyindex(node* &head,int index){
    node* temp=head;
    if(head==NULL){
        cout<<"\nyour linked list is empty";
    }
    else if(index==1){
        head=temp->next;
    }
    else if(index>1){
        for(int i=2;i<index;i++){
            temp=temp->next;
        }
        node* del=temp->next;
        temp->next=temp->next->next;
        delete del;
    }
    else{
        cout<<"\nplease enter valid index";
    }
}

void updation(node* &head,int val,int newval){
    node* temp=head;
    int counter=0;

    while(temp!=NULL){
        if(temp->data==val){
            counter+=1;
            temp->data=newval;
        }
        
        temp=temp->next;
    }
    if(counter==0){
        cout<<"\nyour value is not in the linked list";
    }

}
    
 void bubblesort(node* head){
     int n=0,iteration=1;
     node* temp=head;
     node* temp2=head;
     
     while(temp2!=NULL){
         n+=1;
         temp2=temp2->next;     
     }
     while(iteration<n){
         for(int i=0;i<n-iteration;i++){
             if(temp->data>temp->next->data){
                 int tem=temp->next->data;
                 temp->next->data=temp->data;
                 temp->data=tem;
             }
             temp=temp->next;
         }
         temp=head;
         iteration++;
     }
 }   

void display(node* head){
    node* temp=head;
    cout<<"\n";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    node* head=NULL;
    int ch,val,index,newval;
    char ch1;
    cout<<"#### LINKED LIST OPERATIONS ####";

    while(true){
        cout<<"\n1.insert";
        cout<<"\n2.display";
        cout<<"\n3.search";
        cout<<"\n4.delete";
        cout<<"\n5.updation";
        cout<<"\n6.sorting";
        cout<<"\n7.exit\nchoice:";
        
        cin>>ch;
        if(ch==1){
            cout<<"\nIF THIS IS YOUR 1ST INSERTION THEN DO SELECT OPTION 'b'";
            cout<<"\na.insert at head.";
            cout<<"\nb.insert at tail.";
            cout<<"\nc.insert at index.\n";
            cin>>ch1;
            if(ch1=='a'){
                cout<<"\nenter the value you want to insert: ";
                cin>>val;
                insertatHead(head,val);

            }
            else if(ch1=='b'){
                cout<<"\nenter the value you want to insert: ";
                cin>>val;
                insertatTail(head,val);

            }
            else if(ch1=='c'){
                cout<<"\nenter the index: ";
                cin>>index;
                cout<<"\nenter the value you want to insert: ";
                cin>>val;
                if(index==1){
                    insertatHead(head,val);
                }
                else{
                insertatIndex(head,val,index);
             }
          }
        }
        else if(ch==2){
            display(head);
        }
        else if(ch==3){
            cout<<"\nenter the value you want to search: ";
            cin>>val;
            search(head,val);
        }
        else if(ch==4){
            cout<<"\na.delete by value.";
            cout<<"\nb.delete by index.\n";
            cin>>ch1;
            if(ch1=='a'){
                cout<<"\nenter the value you want to delete: ";
                cin>>val;
                deletebyval(head,val);

            }
            else if(ch1=='b'){
                cout<<"\nenter the index from where you want to delete: ";
                cin>>index;
                deletebyindex(head,index);

            }
            else{
                cout<<"\ninvalid option.";
            }
            
        }
        else if(ch==5){
            cout<<"\nwhich value you want to update: ";
            cin>>val;
            cout<<"\nenter the new values: ";
            cin>>newval;
            updation(head,val,newval);

        }
        else if(ch==6){
            cout<<"\nbefore sorting.";
            display(head);
            bubblesort(head);
            cout<<"\nafter sorting.";
            display(head);
            cout<<"\n";
        }
        else if(ch==7){
            exit(1);
        }
        else{
            cout<<"\nplease enter valid choice.";
        }
    }
}