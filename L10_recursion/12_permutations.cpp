//permutation using recursion
#include <iostream>
#include<string.h>
using namespace std;

void permutation(char a[],int i){

    //base case
    if(a[i]=='\0'){
        cout<<a<<endl;
        return;
    }


    //recursive case
    for(int j=i;a[j]!='\0';j++){
        swap(a[i],a[j]);
        permutation(a,i+1);         //passed by refernce kre rhe hai to to array change ho jata hai to original state/array me jana chahiye
        swap(a[i],a[j]);            //passed by refernce so need to swap back to return to orig state 

    }
}
int main(){
    char a[100]="abc";
    // cin>>a;
    // int n=strlen(a);


    permutation(a,0);





}