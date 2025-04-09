//balanced parenthesis
#include <iostream>
using namespace std;
void balanced_parenthesis(char *a ,int open, int i, int close,int n){
    if(i==2*n){
        a[i]='\0';
        cout<<a<<endl;
        return;
    }
    if(open<n){
        a[i]='(';
        balanced_parenthesis(a,open+1,i+1,close,n);
    }
    if(close<open){
        a[i]=')';
        balanced_parenthesis(a,open,i+1,close+1,n);
    }


}
int main(){
    int n=3;
    // cin>>n;
    char a[100];
    balanced_parenthesis(a,0,0,0,n);
    
}