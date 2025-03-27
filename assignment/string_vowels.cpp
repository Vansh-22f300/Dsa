#include<iostream>
#include<string.h>
using namespace std;    
int main(){
    // string name="Vansh";
    // int length_s=name.length();
    // int count=0;
    // for(int i=0;i<length_s;i++){
    //     if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U'){
    //         count++;
    //     }
    // }
    // cout<<"Vowels count in your name is: "<<count<<endl;



// for character array
    char name[100];

    cin.getline(name,100);
    int len_a=strlen(name);
    cout<<len_a<<endl;
    int count=0;
    for(int i=0;i<len_a;i++){
        // or for(int i=0;name[i]!='\0';i++)
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U'){
            count++;
        }
    }
    cout<<"Vowels count in your name is: "<<count<<endl;

}
