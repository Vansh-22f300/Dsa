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
int height(node* root){
    if(root==NULL )return 0;
    int left=height(root->left);
    int right=height(root->right);
    int height=max(left,right)+1;
    return height;
}
int main(){
    node* root=buildtree();
    cout<<"Height of the tree are: ";
    cout<<height(root);
   
 //ip:8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
//op:4
}