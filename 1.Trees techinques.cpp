#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
void preorder(struct node *x){ //preorder(root,left,right)
    if(x==NULL){
        return ;
    }
    cout<<x->data;
    preorder(x->left);
    preorder(x->right);
}
void inorder(struct node *y){ //inorder(left,root,right)
    if(y==NULL){
        return;
    }
    inorder(y->left);
    cout<<y->data;
    inorder(y->right);
}
void postorder(struct node *z){ //postorder(left,right,root)
    if(z==NULL){
        return;
    }
    postorder(z->left);
    postorder(z->right);
    cout<<z->data;
}
int main() {
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<"preorder----";
    preorder(root);
    cout<<endl;
    cout<<"inorder----";
    inorder(root);
    cout<<endl;
    cout<<"postorder-----";
    postorder(root);
}

