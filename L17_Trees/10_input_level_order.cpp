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

node* inputlevelorder(){
    int data;
    cin>>data;

    if(data==-1)return NULL;
    
    node* root=new node(data);
    
    queue<node*> q;
    q.push(root);
   

    while(!q.empty()){
        node * front=q.front();
        q.pop();
        cout<<"Enter children of"<<front->data<<":";
        int l,r;
        cin>>l>>r;
        if(l!=-1){
            front->left=new node(l);
            q.push(front->left);
        }
        if(r!=-1){
            front->right=new node(r);
            q.push(front->right);
        }
        
    }
}

void levelorder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node * front=q.front();
        q.pop();
        if(front!=NULL){
            cout<<front->data<<" ";
            if(front->left!=NULL)q.push(front->left);
            if(front->right!=NULL)q.push(front->right);
            
        }
        else{
            //front==NULL
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            
        }
    }
}
int main()
{
    node *root =inputlevelorder();
    levelorder(root);
    cout << endl;
   

    // ip:8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    // op:4
}