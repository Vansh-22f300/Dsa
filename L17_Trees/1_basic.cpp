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
void preorder(node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root=buildtree();
    cout<<"Preorder traversal of the tree is: ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder traversal of the tree is: ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder traversal of the tree is: ";
    postorder(root);
    cout<<endl;
 
  
}