#include <bits/stdc++.h>
using namespace std;

char keys[][10]={
    "","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"
};

void printkeypad(char *ip,int i,char* op,int j){
    //Here we can use &ip and &op instead of ip and op
    //because array name is a pointer to its first element
    //so &ip is the address of the first element of ip
    //and &op is the address of the first element of op
    //so we can use &ip and &op in place of ip and op
    //but the syntax will be different
    //for example, instead of ip[i], we will have to use (*ip)[i]
    //and instead of op[j], we will have to use (*op)[j]
    //so the syntax will be as follows:
    //(*ip)[i] instead of ip[i]
    //(*op)[j] instead of op[j]
    //but it is not recommended to use &ip and &op
    //because it can be confusing and it is not commonly used
    //so it is better to use ip and op instead of &ip and &op
      //base case
    if(ip[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
    }

    // /recursive case
    int digit=ip[i]-'0';
    for(int k=0;keys[digit][k]!='\0';k++){
        op[j]=keys[digit][k];
        printkeypad(ip,i+1,op,j+1); //recursive call
    }

}
int main(){
    char op[100];
    char ip[100]="84";

    printkeypad(ip,0,op,0);
}