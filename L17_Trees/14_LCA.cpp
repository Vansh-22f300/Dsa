#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node *buildtree()
{
    int data;
    cin >> data;
    if (data == -1)
        return NULL;

    node *root = new node(data);

    // LSt
    root->left = buildtree();

    // RSt
    root->right = buildtree();

    return root;
}
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
node* LCA(node*root,int p,int q){
    if(root==NULL)return NULL;
    if(root->data==p)return root;
    if(root->data==q)return root;

    node* leftans=LCA(root->left,p,q);
    node* rightans=LCA(root->right,p,q);

    if(leftans==NULL && rightans==NULL)return NULL;
    else if(leftans!=NULL && rightans==NULL)return leftans;
    else if(leftans==NULL && rightans!=NULL)return rightans;
    else{
        return root;
    }
}
int main()
{
    node *root = buildtree();
    
    // cout<<"LCA of the tree is: ";
    // node* p=new node(1);
    // node* q=new node(4);
    node* ans=LCA(root,8,7);
    cout<<ans->data<<endl;
    return 0;   

    // ip:8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    // op:4
}
