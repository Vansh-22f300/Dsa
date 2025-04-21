#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data){
            this->data = data;
            this->next = NULL;
        }
};
class stack{
    public:
    node *head;
    stack(){
        head = NULL;
    }
    void push(int data){
        node* n = new node(data);
        if(head == NULL){
            head = n;
            return;
        }
        else{
            n->next = head;
            head = n;
        }
    }
    void pop(){
        if(head == NULL){
            cout << "Stack underflow" << endl;
            return;
        }
        else if(head->next == NULL){
            delete head;
            head = NULL;
            return;
        }
        else{
            node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    int top(){
        if(head == NULL){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head->data;
    }
    bool empty(){
        return head == NULL;
    }
};

int main(){
    stack s;
    for(int i=1; i<5; i++){
        s.push(i);
    }
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout<<endl;
    s.pop(); // Stack underflow
}