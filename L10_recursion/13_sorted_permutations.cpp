#include<iostream>
#include<string.h>
using namespace std;
void permutation(string ip,string op){

    //base case
    if(ip.size()==0){
        cout<<op<<" ";
        return;
    }
    //recursive case
    for(int i=0;i<ip.size();i++){
    char ch=ip[i];
    //we are taking one character at a time and putting it in output string
    //and then recursively calling the function on the remaining string
    //substr function is used to get the string from 0 to i and i+1 to end
    permutation(ip.substr(0,i)+ip.substr(i+1),op+ip[i]);    //substr function
    }
    
}

int main(){
    string s ="abc";
    permutation(s,"");


}