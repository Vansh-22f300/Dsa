#include<iostream>
#include<string.h>
using namespace std;
int StringtoInt(char a[],int n){
    if(n==0) return 0;
    else{
        return StringtoInt(a,n-1)*10 + a[n-1]-'0';
    }


}
int main(){
    char a[]="1234";
    int n=strlen(a);
    int x=StringtoInt(a,n);
    cout<<x+1;
    // cout<<stoi(a);
    
}