#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};

int findlength(node * head){
    int len=0;
    node * temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtFront(node* &head,node* &tail,int data){
    node* n=new node(data);
    if(head==NULL){
        node *n=new node(data);
        head=tail=n;
    }
    else{
        node *n=new node(data);
        n->next=head;
        head=n;
    }
    
}
void insertAtEnd(node* &head,node* &tail,int data){
    if(head==NULL){
        node *n= new node(data);
        head=tail=n;
    }
    else{
        node *n=new node(data);
        tail->next=n;
        tail=n;
    }
}

void insertAtPosition(node* &head,node* &tail,int data,int position){
    int length=findlength(head);
    cout<<endl<<"Length of the linked list is: "<<length<<endl;
    if(position==0) insertAtFront(head,tail,data);
    else if(position>=length) insertAtEnd(head,tail,data);
    else{
        node *n=new node(data);
        node* prev=NULL;
        node * curr=head;
        while(position!=0){
            position--;
            prev=curr;
            curr=curr->next;
        }
        n->next=curr;
        prev->next=n;

        //ORRRRR
        // node *temp=head;

        // for(int i=0;i<position-1;i++){
        //     temp=temp->next;
        // }
        // n->next=temp->next;
        // temp->next=n;
    }
    

}
void printLL(node *&head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout << "NULL" << endl;  // ✅ Add this line

}
bool iscyclic(node * head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow )return true;
    }
    return false;
}

int main(){
    //int *a,b here a is pointer where as b are integer

    node* head,*tail;
    head=tail=NULL;
    insertAtFront(head,tail,21);
    insertAtFront(head,tail,10);
    insertAtFront(head,tail,42);
    insertAtFront(head,tail,3);
  
    printLL(head);
    cout<<endl;
    if(iscyclic(head))cout<<"Cyclic"<<endl;
    else cout<<"Not Cyclic"<<endl;
    cout<<endl;
}