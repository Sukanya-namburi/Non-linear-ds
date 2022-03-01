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
    vector<vector<int>>out;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int>ans;
        for(int i=0;i<size;i++){
            Node *temp=q.front();
            q.pop();
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
            ans.push_back(temp->data);
        }
        out.push_back(ans);
    }
for(auto it1:out){
    for(auto it2:it1){
        cout<<it2<<" ";
    }
}
}
