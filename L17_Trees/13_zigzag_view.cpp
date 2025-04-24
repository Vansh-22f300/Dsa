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

void zigzag(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    vector<int>temp;
    vector<vector<int>>v;

    while(!q.empty()){
        node * front=q.front();
        q.pop();
        
        if(front!=NULL){
            temp.push_back(front->data);
            if(front->left!=NULL)q.push(front->left);
            if(front->right!=NULL)q.push(front->right);
            
        }
        else{
            //front==NULL
            
            v.push_back(temp);
            temp.clear();
            if(!q.empty()){
                q.push(NULL);
            }
            
        }
    }

    for(int i=0;i<v.size();i++){
        if(i%2!=0){     //odd ulta print
            for(int j=v[i].size()-1;j>=0;j--){
                cout<<v[i][j]<<" ";
            }
        }
        else{        //even print
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;

}
int main()
{
    node *root = buildtree();
    zigzag(root);
    return 0;   

    // ip:8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    // op:4
}