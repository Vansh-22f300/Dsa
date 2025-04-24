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
int countnodes(node* root){
    if(root==NULL )return 0;
    return 1+ countnodes(root->left)+countnodes(root->right);
}
int main(){
    node* root=buildtree();
    cout<<countnodes(root);
   
 
  
}