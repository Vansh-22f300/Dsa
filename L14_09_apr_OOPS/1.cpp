#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;
    
    customer(){
        cout<<"Inside Default Constructor"<<endl;
    }
    customer(string n,int a , char g,double c){
        cout<<"\n Inside parameterized constructor"<<endl;
        name=n;
        age=a;
        gender=g;
        credits=c;
    }

    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Credits: "<<credits<<endl;
    
    }
    bool operator>(customer & c){       // c here is c2
        if(age>c.age){
            return true;

        }else{
            return false;
        }
    }
    int  operator+(customer &c){
        return credits+c.credits;

    }
};

int main(){

    // customer c1;
    // c1 is an obj of customer class and it has 4 properties
    // c1.age=21;
    // c1.name="vansh";
    // c1.gender='m';
    // c1.credits=311.5;
    // print(c1);
  
 
    // cout<<endl;
    // customer c2;
    // cin>>c2.name>>c2.age>>c2.gender>>c2.credits;
    // cout<<"Printing Values of c2"<<endl;
    // print(c2);
    // c2.print();     //internally addrss of c2 is passed to print function
    // cout<<endl;
    //c2 is an obj of customer class and it has 4 properties
    // cout<<"Name: "<<c2.name<<endl;
    // cout<<"Age: "<<c2.age<<endl;
    // cout<<"Gender: "<<c2.gender<<endl;
    // cout<<"Credits: "<<c2.credits<<endl;

    cout<<endl;
    customer c1("vansh",21,'m',311.5);\
    c1.print(); //internally addrss of c2 is passed to print function
    customer c2("sh",224,'m',3131.5);
    c2.print();
    cout<<"Printing Values of c2"<<endl;


    //operator overloading
    // name bgins bt rhe operator keyword followed by operaotr sign that is overloaded
    // type operator sign (paramneters)
    // cout<<(c1>c2)<<endl; //prints 1 if true and 0 if false
    c1>c2? cout<<c1.name<<" is older than "<<c2.name<<endl:cout<<c2.name<<" is older than "<<c1.name<<endl;


    cout<<c1+c2<<endl<<endl<<endl;
    cout<<"Pointers"<<endl<<endl;
    customer * cptr=&c2;
    cout<<cptr<<endl; //using pointer to access the name of customer
    cout<<"name-> "<<(*cptr).name<<endl; //using pointer to access the name of customer
    cout<<(*cptr).age<<endl; //using pointer to access the name of customer
    cout<<(*cptr).gender<<endl; //using pointer to access the name of customer
    cout<<(*cptr).credits<<endl<<endl;

    cout<<"Name-> "<<cptr->name<<endl; //using pointer to access the name of customer
    cout<<cptr->age<<endl; //using pointer to access the name of customer
    cout<<cptr->gender<<endl; //using pointer to access the name of customer
    cout<<cptr->credits<<endl; //using pointer to access the name of customer


    //stack memory memory allocatwd for stack segment of application memory is fixed
    // size of stack fram for a function must be known at compile time
    // process of allocation and deallocation of memory is handled by OS
    // // dangling pointer problem
    // int *ptr = new int(5);
    // cout << "Value: " << *ptr << endl;
    // delete ptr;
    // ptr = nullptr; // avoid dangling pointer by setting it to nullptr


    //HEAP or dynamic memory allocation
    // heap memory is allocated for heap segment of application memory is dynamic
    // size of heap memory is not known at compile time
    // process of allocation and deallocation of memory is handled by programmer
    int *ptr = new int;
    *ptr = 5;
    cout << "Value: " << *ptr << endl;
    delete ptr; 

    cout<<endl<<endl;
    customer *cptr3=new customer;
    cin>>cptr3->name>>cptr3->age>>cptr3->gender>>cptr3->credits;
    cptr3->print(); //internally addrss of c2 is passed to print function
    cout<<endl;

    customer *cptr2=new customer("vansh",21,'m',311.5);
    cptr2->print(); //internally addrss of c2 is passed to print function
    return 0;
}