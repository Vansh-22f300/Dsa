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
void solve(node*root,int k,int d=0){
    if(!root)return ;
    if(d==k){
        cout<<root->data<<" ";
        return ;
    }
    solve(root->left,k,d+1);
    solve(root->right,k,d+1);
}
// Function to print all nodes at distance k from a given node
int distanceOfNode(node* root, int node, int k) {
	if (!root) return -1;

	if (root->data == node) {
		solve(root, k); // Agar node mill gai toh tree ke neeche wale sabhi nodes at
		//  distance k print karo
		return 0;
	}

	// LST ki root se node ka distance batao
	int d = distanceOfNode(root->left, node, k);
	if (d != -1) { // Valid distance hai
		if (d + 1 == k) {
			cout << root->data << " ";
			return -1; // Ab aur upar distance k par nodes nahi milengi
		}

		int rd = k - d - 2;
		solve(root->right, rd); // Ab right subtree par rd distance wali nodes print kardo
		return d + 1;
	}

	// Ab RST se node ka distance pucho
	d = distanceOfNode(root->right, node, k);
	if (d != -1) {
		if (d + 1 == k) {
			cout << root->data << " ";
			return -1; // Ab aur upar distance k par nodes nahi milengi
		}

		int rd = k - d - 2;
		solve(root->left, rd); // Ab left subtree par rd distance wali nodes print kardo
		return d + 1;
	}

	return -1;
}
int main()
{
    node *root = buildtree();
    distanceOfNode(root,10,2);
    return 0;   

    // ip:8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    // op:4
}
