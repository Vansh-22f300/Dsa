#include <iostream>
using namespace std;
int main(){
    int x=1;
    int *dptr=&x;
    cout<<*dptr<<endl;
    cout<<dptr<<endl;
    dptr++;
    cout<<dptr<<endl;


}