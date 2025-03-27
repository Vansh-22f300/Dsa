#include<iostream>
using namespace std;
int main(){
    int x=12;
    float f=3.4;
    // bool b=false;
    // char c='z';


    int *iptr=&x;
    // float *fptr=&f;
    // bool *bptr=&b;
    // char *cptr=&c;
    cout<<iptr<<endl;
    // cout<<bptr<<endl;
    // // cout<<fptr<<endl;
    // // cout<<cptr<<endl;    
    // // cout<<&c<<endl;


    //1.typecasting //explicit
    // char c='z';
    // int *iptr=(int*)&c; // first we make int pntr and then typecast
    // cout<<iptr;
    // //typecast from char to int

    //2.typecast from int to char
    int y=89;
    char *cptr=(char*)&y;
    cout<<cptr;

}
