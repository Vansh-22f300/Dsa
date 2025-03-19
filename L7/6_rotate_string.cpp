#include<iostream>
#include <string.h>
using namespace std;

int main(){
    //rotatestring
    char a[100]="Coding";
    int len=strlen(a);
    int k=4;

    //1.shift all characters k positions ahead
    for(int i=len-1;i>=0;i--){
        a[i+k]=a[i];
    }
    //2. bring last ke  k characters to starting the array
    int i=len;
    int j=0;
    while(j<k){
        a[j]=a[i];
        j++;
        i++;
    }
    //3. put '\0' at the end
    a[len]='\0';
    cout<<a<<endl;

    
    return 0;
}