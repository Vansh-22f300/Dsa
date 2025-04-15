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

void printbyvalue(node *head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
}
void printbyrefernce(node *&head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
}

int main(){
//    createLinkedList();
    node a(1), b(2), c(3);

    a.next=&b;
    b.next=&c;
    c.next=NULL;

    node *head,*tail;
    head=&a;
    tail=&c;

    printbyvalue(head); // this will not work as head is passed by value
    // printbyrefernce(head); // this will work as head is passed by reference
    printbyrefernce(head); // this will work as head is passed by reference
    cout<<endl<<&a<<endl;
    cout<<head<<endl;
}