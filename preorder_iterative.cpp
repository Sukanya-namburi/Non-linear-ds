#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    stack<Node*>st;
    st.push(root);
    vector<int>ans;
    while(!st.empty()){
        Node *temp=st.top();
        st.pop();
        if(temp->right!=NULL)st.push(temp->right);
        if(temp->left!=NULL)st.push(temp->left);
        ans.push_back(temp->data);
    }
for(auto it:ans){
    cout<<it<<" ";
}
    }
