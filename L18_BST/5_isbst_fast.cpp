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

bool isbst(Node* root,int min,int max){

    if(!root) return true;
    if(root->data>min && root->data<max){
        bool left=isbst(root->left,min,root->data);
        bool right=isbst(root->right,root->data,max);
        return left && right;
    }
    else{
        return false;
    }
}

int main() {
								//ip:8 3 10 1 6 14 4 7 13 -1
	Node* root = NULL;
	createBST(root);
    bool ans=isbst(root,INT_MIN,INT_MAX);
    if(ans){
        cout<<"BST exist";
    }
    else{
        cout<<"BSt Does not exist";
    }
	return 0;
}