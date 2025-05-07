#include <iostream>
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

void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		Node* temp = q.front();
		q.pop();

		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			cout << temp->data << " ";
			if(temp->left != NULL) {
				q.push(temp->left);
			}
			if(temp->right != NULL) {
				q.push(temp->right);
			}
		}
	}
}

void preorder(Node* root) {
	//NLR
	if(root == NULL)
		return ;
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node* root) {
	//LNR
	if(root == NULL)
		return ;
	
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(Node* root) {
	//LRN
	if(root == NULL)
		return ;
	
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}
void printinrange(Node* root,int k1,int k2){
    if(root==NULL){
        return;
    }
	if(root->data>k2){
		printinrange(root->left,k1,k2);    
	}
	else if(root->data<k1){
		printinrange(root->right,k1,k2);
	}
	else{
		printinrange(root->left,k1,k2);    
		if(root->data>=k1 && root->data<=k2){
			cout<<root->data<<" ";
		}
		
		printinrange(root->right,k1,k2);
	}
}

bool search(Node* root,int target){
    if(!root){
        return false;
    }
    if(root->data==target){
        return true;
    }
	bool left=false;
	bool right=false;
    if(root->data<target){
        right=search(root->right,target);
        
    }
    else{
        left=search(root->left,target);
      
    }
	return right || left;
}

// bool searchInBST(Node* root, int target) {
// 	//base case
// 	if(root == NULL) {
// 		return false;
// 	}

// 	//1 case mujhe solve krna h 
// 	if(root->data == target ) {
// 		return true;
// 	}

// 	//baaaki recursion sambhal lega 
// 	//left ya right
// 	bool leftAns = false;
// 	bool rightAns = false;
// 	if(target > root->data) {
// 		rightAns = searchInBST(root->right, target);
// 	}
// 	else {
// 		leftAns = searchInBST(root->left, target);
// 	}

// 	return leftAns || rightAns;
// }

//
int main() {
								//ip:8 3 10 1 6 14 4 7 13 -1
	Node* root = NULL;
	createBST(root);

	levelOrderTraversal(root);


    
	cout << endl << "Inorder: " ;
	inorder(root);
	cout << endl << "Preorder: ";
	preorder(root);
	cout << endl << "PostOrder: ";
	postorder(root);
    cout<<endl;
    cout<<"Print in range"<<endl;
    int k1,k2;
    // cin>>k1>>k2;
    printinrange(root,3,14);
	cout<<endl;
	int target ;
	bool ans=search(root,84);
	if(ans){
		cout<<"Exist";
	}

	else{
		cout<<"Does not Exist";
	}


	return 0;
}