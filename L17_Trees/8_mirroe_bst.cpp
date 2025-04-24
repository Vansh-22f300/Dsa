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
void mirror(node *root)
{
    if (root == NULL)
        return;
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
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
int main()
{
    node *root = buildtree();
    mirror(root);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;

    // ip:8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    // op:4
}