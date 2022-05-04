#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* insert(node* head,int val){
    
    if(head==NULL){
        
        return new node(val);
    }
    if(val<head->data){
        head->left=insert(head->left,val);
    }else{
        head->right=insert(head->right,val);
    }

}

node* search(node* root,int val){
    if(root==NULL){
        return NULL;
    }

    if(root->data==val){
        return root;
    }
    if(val<root->data){
        return search(root->left,val);
    }
     
    return search(root->right,val);
}



void inorder(node* head){
    if (head==NULL){
        return;
    }
    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);
}

int main(){
    node* head=NULL;
    head=insert(head,6);
    insert(head,4);
    insert(head,11);
    insert(head,5);
    insert(head,7);
    insert(head,1);
    inorder(head);

    if(search(head,7)==NULL){
        cout<<"\nvalue doesnt exist.\n";
    }
    else{
        cout<<"\nyour value exist\n";
    }
}