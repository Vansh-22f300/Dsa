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
}
//3.length of LL
int length_LL(Node* head){
    Node*temp=head;
    int cnt=0;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
//4.Searching alement
int Checkifpresentornot(Node*head,int key){
    Node*temp=head;
    while(temp){
        if (temp->data==key)
        return 1;
        else{
            return 0;
        }

    }
}
int main(){
    vector<int> arr={100,2,3,4};
    // Node *y=new Node(arr[0],nullptr);
    Node* head=Convert2arr(arr);
    cout<<head->data<<endl;


    //traversal
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    //

    //length
    cout<<length_LL(head)<<endl;  

    //search
    cout<<Checkifpresentornot(head,3);

}