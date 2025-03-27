#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
//array to LL
Node* Convert2arr(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* next=new Node(arr[i]);
        mover->next=next;
        mover=next;
    }
    return head;
    //
}
//1.delete head
Node* removeshead(Node *head){
    if(head==NULL) return head;
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}

void print(Node *head){
    Node *temp=head;
    while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr={1,2,3,4};
    // Node *y=new Node(arr[0],nullptr);
    Node* head=Convert2arr(arr);
    head=removeshead(head);
    print(head);
   

}