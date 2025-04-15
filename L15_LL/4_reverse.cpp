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

// void createLinkedList(){
    
//     while(head!=NULL){
//         cout<<head->data<<"-->";
//         head=head->next;
//     }
    
// }
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
void reversell(node* &head,node* &tail){
    node* prev=NULL;
    node *curr=head;

    while(curr!=NULL){
        node * newnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=newnode;
    }
swap(head,tail);
}
void printLL(node *&head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout << "NULL" << endl;  // ✅ Add this line

}
int main(){
    //int *a,b here a is pointer where as b are integer

    node* head,*tail;
    head=tail=NULL;

    insertAtFront(head,tail,1);
    insertAtFront(head,tail,2);
    insertAtFront(head,tail,3);
    insertAtFront(head,tail,4);
    insertAtEnd(head,tail,5);
    insertAtEnd(head,tail,6);
   
    printLL(head); // this will work as head is passed by reference
     cout<<endl;

    reversell(head,tail);
    printLL(head);
    cout<<endl;
    
}