#include<iostream>
#include<string.h>
using namespace std;
void concatenate(char a[],char b[]){
    int i=strlen(a);
    int j=0;
    while(j<=strlen(b)){
        a[i]=b[j];
        i++;
        j++;
    }
    // cout<<a<<endl;
}
int main(){

    //concat string
    char a[100]="Coding----";
    char b[]="Blocks";

    // concatenate(a,b);    user defined function
   
   
    strcat(a,b);            //inbuilt function
    cout<<a<<endl;
}