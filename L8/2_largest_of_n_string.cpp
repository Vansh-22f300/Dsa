#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get(); //to consume the extra enter(\n wala )
    char a[100];
    char largest[100];
    int max_len=0;

    for(int i=0;i<n;i++){
        cin.getline(a,100);   

        //to find largest string in char array
            int len_a=strlen(a);
            if(len_a>max_len){
               max_len=len_a;
               strcpy(largest,a); //copy largets into a
            }
    }

    cout<<"Largest: "<<largest;

}