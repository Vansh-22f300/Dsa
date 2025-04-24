#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node* left;
    node* right;


    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* buildtree(){
    int data;
    cin>>data;
    if(data==-1) return NULL;

    node * root=new node(data);

    //LSt
    root->left=buildtree();

    //RSt
    root->right=buildtree();

    return root;
}
//search a node in a binary tree
//takes root and key as input and return the node if found else NULL
node* search(node * root, int key){
    if(root==NULL)
        //if tree is empty return NULL
        return NULL;
        
    if(root->data==key)
        //if root data is equal to key, return root
        return root;

    node * leftans=search(root->left,key);
    if(leftans!=NULL) 
        return leftans;
        //if left subtree has key, return left subtree
       
    node * rightans=search(root->right,key);
    //if right subtree has key, return right subtree
    return rightans;
}
int main(){
    node* root=buildtree();
    node* ans=search(root,130);
    if(ans)cout<<"Found"<<ans->data<<endl;
    else cout<<"Not Found"<<endl;

   //ip:8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
//op:4
}