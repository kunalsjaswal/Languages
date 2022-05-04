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
 void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<"   "<<root->data<<endl;
    cout<<" "<<root->left->data<<"   "<<root->right->data<<endl;
    cout<<root->left->left->data<<" "<<root->left->right->data<<" "<<root->right->left->data<<" "<<root->right->right->data<<endl;

    cout<<"preorder: ";
    preorder(root);
    cout<<endl<<"inorder: ";
    inorder(root);
    cout<<endl<<"postorder: ";
    postorder(root);
}
