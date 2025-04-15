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
node* mergeLL(node *a,node *b){
    if(a==NULL) return b;
    if(b==NULL) return a;

    node* nh;
    if(a->data < b->data){
        nh=a;
        nh->next=mergeLL(a->next,b);
    }
    else{
        nh=b;
        nh->next=mergeLL(a,b->next);
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
int main(){
    //int *a,b here a is pointer where as b are integer

    node* head,*tail;
    node* head1,*tail1;

    head=tail=NULL;
    head1=tail1=NULL;
    insertAtFront(head,tail,2);
    insertAtFront(head,tail,1);
    insertAtFront(head1,tail1,4);
    insertAtFront(head1,tail1,3);
  
    printLL(head);
    cout<<endl;
    printLL(head1); // this will work as head is passed by reference
    cout<<endl<<"Length of the linked list is: "<<findlength(head)<<endl;
    mergeLL(head,head1);
    printLL(head);
}