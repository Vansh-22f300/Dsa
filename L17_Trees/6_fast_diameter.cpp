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
int diameter(node * root){
    if(root==NULL)return 0;

    int opt1=height(root->left)+height(root->right);
    int opt2=diameter(root->left);
    int opt3=diameter(root->right);
    int ans=max(opt1,max(opt2,opt3));
    return ans;
}
class Pair{
    public:
    int height;
    int diameter;
};
Pair fastdiameter(node* root){
    if(root==NULL){
        Pair p;
        p.height=p.diameter=0;
        return p;
    }
    Pair p;
    Pair left=fastdiameter(root->left);
    Pair right=fastdiameter(root->right);

    p.height=max(left.height,right.height)+1;
    //Diameter of the tree is max of left height and right height
    //and left diameter and right diameter
    int opt1=left.height+right.height;
    int opt2=left.diameter;
    int opt3=right.diameter;

    p.diameter=max(opt1,max(opt2,opt3));
    return p;
}
int main(){
    node* root=buildtree();
    cout<<"Height of the tree are: ";
    cout<<height(root)<<endl;
    cout<<"Diamter of tReee:";
    cout<<diameter(root)<<endl;
    Pair p=fastdiameter(root);
    cout<<"Fast Height of the tree are: ";
    cout<<p.height<<endl;
    cout<<"Fast Diameter of the tree are: ";
    cout<<p.diameter<<endl;

   //ip:8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
//op:4
}