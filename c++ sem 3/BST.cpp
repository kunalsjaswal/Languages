#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{  
int data;
node *left;
node *right;
}*root;

void insert(node *tree,node *newnode){
if(root==NULL){
    root=new node;
    root->data=newnode->data;
    root->left=NULL;
    root->right=NULL;
    cout<<"root node is added ";
    return;
}
if(tree->data==newnode->data){
    cout<<"element already present";
    return;
}
if(tree->data>newnode->data){
   if(tree->left!=NULL){
       insert(tree->left,newnode);
   }
   else{
       tree->left=newnode;
       (tree->left)->left=NULL;
       (tree->left)->right=NULL;
       cout<<"node added to left";
       return;
   }
}
else{
    if(tree->right!=NULL){
        insert(tree->right,newnode);
    }
    else{
        tree->right=newnode;
        (tree->right)->left=NULL;
        (tree->right)->right=NULL;
        cout<<"node added to the right node";   
        return;
    }
}
}

void inorder(node *ptr){
    if(root==NULL){
        cout<<"\ntree is empty";
        return;
    }
    if(ptr!=NULL){
        inorder(ptr->left);
        cout<<ptr->data<<" ";
        inorder(ptr->right);
    }
}

void preorder(node *ptr){
    if(root==NULL){
        cout<<"\ntree is empty";
        return;
    }
    if(ptr!=NULL){
        cout<<ptr->data<<" ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void postorder(node *ptr){
    if(root==NULL){
        cout<<"\ntree is empty";
        return;
    }
    if(ptr!=NULL){
        preorder(ptr->left);
        preorder(ptr->right);
        cout<<ptr->data<<" ";
    }
}

int main(){
    int c;
    node *t;
    while(true){
        cout<<"\n\n1.Insert Element "<<endl;
        cout<<"2.inorder trasversal"<<endl;
        cout<<"3.preorder trasversal"<<endl;
        cout<<"4.postorder trasversal"<<endl;
        cout<<"5.exit"<<endl;
        cout<<"\nenter your choice: ";
        cin>>c;
    if(c==1){
    t=new node;
    cout<<"\nenter the number to be inserted:";
    cin>>t->data;
    insert(root,t);
    }
    else if(c==2){
        cout<<"\ninoder traversal: ";
        inorder(root);
    }
    else if(c==3){
        cout<<"\npreorder traversal: ";
        preorder(root);
    }
    else if(c==4){
        cout<<"\npostorder traversal: ";
        postorder(root);
    }
    else if(c==5){
        exit(0);
    }
    else{
         cout<<"\nwrong choice";
    }

}
}