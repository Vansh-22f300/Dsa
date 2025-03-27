#include <iostream>
using namespace std;
int main(){
    int x=144;

    // char* cptr=(char*)&x;
    // cout<<cptr;
    int *iptr=&x;
    int y=*iptr;        //derefencing
    cout<<y<<endl;


    //derefencing a pointer twice **
    int **dptr = &iptr; // dptr is a pointer to a pointer, storing the address of iptr
                        //it is a double ppointer
    
    cout << **dptr << endl; // Dereferencing twice to get the value of x through dptr
}