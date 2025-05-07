#include <bits/stdc++.h>
#include<queue>
using namespace std;

class Node{
	public:
	int data;
	Node* left;
	Node* right;

	Node(int value) {
		this->data = value;
		this->left = NULL;
		this->right = NULL;
	}
};

Node* insertIntoBST(Node* root, int data) {
	if(root == NULL) {
		root = new Node(data);
		return root;
	}

	//its not the first node
	if(data > root->data) {
		root->right = insertIntoBST( root->right, data);
	}
	else {
		root->left = insertIntoBST( root->left, data);
	}
	return root;
}

void createBST(Node* &root) {
	cout << "Enter data:" << endl;
	int data;
	cin >> data;

	while(data != -1) {
		root = insertIntoBST(root, data);
		cout << "Enter data:" << endl;
		cin >> data;
	}
}

int minTree(Node* root){
    if(!root)return INT_MAX;
    int left=minTree(root->left);
    int right=minTree(root->right);
    return min(root->data,min(left,right));
}
int maxTree(Node* root){
    if(!root)return INT_MIN;
    int left=maxTree(root->left);
    int right=maxTree(root->right);
    return max(root->data,max(left,right));
}
bool isbst(Node* root, int minVal, int maxVal) {

	if (!root) return true;

	if (root->data > minVal && root->data < maxVal) {
		bool left = isbst(root->left, minVal, root->data);
		bool right = isbst(root->right, root->data, maxVal);
		return left && right;
	} else {
		return false;
	}
}

int main() {
								//ip:8 3 10 1 6 14 4 7 13 -1
	Node* root = NULL;
	createBST(root);
    bool ans = isbst(root, INT_MIN, INT_MAX);
   
    if(ans){
        cout<<"BST exist";
    }
    else{
        cout<<"BSt Does not exist";
    }
    cout<<endl;
    cout<<minTree(root)<<" ";
    cout<<maxTree(root)<<" ";
	return 0;
}
