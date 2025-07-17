#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int age;
        int marks;

        Student(string n,int a,int m){
            name=n;
            age=a;
            marks=m;
        }
        void print(){
            cout<<name<<" "<<endl;
            cout<<age<<" "<<endl;
            cout<<marks<<" "<<endl;
            cout<<endl;
        }
    
};
class myClass{
    public:
        bool operator()(Student a, Student b){      //Functor
            return a.name>b.name;
        }

};

int main(){
    priority_queue<Student,vector<Student>,myClass >h;
    Student a("Dev",21,87);
    Student b("Dak",20,89);
    Student c("Amit",22,90);

    h.push(a);
    h.push(b);
    h.push(c);
    while(!h.empty()){
       Student x=h.top();
       x.print();

       h.pop();
    }
}