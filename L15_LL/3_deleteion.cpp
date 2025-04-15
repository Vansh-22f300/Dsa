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
void deleteatfront(node* &head,node* &tail){
    if(head==NULL) return;
    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    else{
        node *temp=head;
        head=head->next;
        delete temp;
    }
}
void deleteatend(node* &head,node* &tail){
    if(head==NULL) return;
    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    else{
        node *temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        // temp->next=NULL;
        delete tail;
        tail=temp;
        tail->next=NULL;
    }

}
void deleteatpoistion(node* &head,node* &tail,int position){
    int length=findlength(head);
    //empty list

    if(head == NULL) return;
    if(position==0) deleteatfront(head,tail);
     else if(position==length-1)deleteatend (head,tail);
    else{
        node*prev=NULL;
        node* curr=head;
        while(position!=0){
            position--;
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        //ORRRR
        // node *temp=head;
        // for(int i=0;i<position-1;i++){
        //     temp=temp->next;
        // }
        // node *del=temp->next;
        // temp->next=del->next;

        // temp->next=NULL;
        // delete del;


    }
    
}  
void printLL(node *&head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
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
    deleteatfront(head,tail);
    printLL(head); // this will work as head is passed by reference
    cout<<endl;
    deleteatend(head,tail);
    printLL(head); // this will work as head is passed by reference
    cout<<endl;
    deleteatpoistion(head,tail,2);
    printLL(head); // this will work as head is passed by reference
    // cout<<endl<<"Length of the linked list is: "<<findlength(head)<<endl;
    
}