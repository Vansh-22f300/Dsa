#include<iostream>
using namespace std;
void inputString(char a[],int n,char d='\n'){
    char ch;
    int i=0;
    ch=cin.get();
    while(ch!=d and i<n-1){
        a[i++]=ch;
        ch=cin.get();
    }
    a[i]='\0';
}
int main(){
    
    // char name[5]="aman";
    // char name[100];
    // //cin.geline(array_name,buckets,delimiter)
    // cin.getline(name,100,'.'); //delimiter by default is '\n'
    // cout<<name<<endl;
    
    char a[100];
    // cin.getline(a,100); //to take input
    inputString(a,100,'.');
    cout<<"Array:"<<a<<endl;
    return 0;

}