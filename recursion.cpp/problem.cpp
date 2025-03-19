#include <iostream>
using namespace std;
//1.print name N times
void printname(int i,int n){
    if(i>n) return;
    cout<<"i love coding"<<endl;
    printname(i+1,n);   
}

//2.print linearly from 1to N eg.N=4  -----O/P- 1 2 3 4
void printinc(int i,int n){
    if(i==n+1) return;  //OR if(i>n) return;
    cout<<i<<" ";
    printinc(i+1,n);
}
//3.Print decreasing from N to 1 eg.N=4  -----O/P- 4 3 2 1
void printdec(int i,int n){
    if(i<1) return;
    cout<<i<<" ";
    printdec(i-1,n);
}
//4.sum upto n numbers using functionsl recursion

int sum(int n){
    if(n==0)return 0;
    else{
        return n+sum(n-1);
    }
}

//5.Sum up to n numbers using parametrized recursion
void sum1(int i, int sum) {
    if (i == 0) {
        cout << sum ;
        return;
    }
    sum1(i - 1, sum + i);
}
//6.factorial using functinal recursion
int factorial(int n){
    if(n==0 || n==1 )return 1;
    return n*factorial(n-1);
}
//7.factorial using parametrized recursion
void factorial1(int i,int fact){
    if(i==0 ||i==1){
        cout<<fact<<endl;
        return;
    }
    factorial1(i-1,fact*i);

}

//8.Reverse an array using recursion
void reversearray(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);    
    reversearray(i+1,arr,n);
}

//9.check if string is palindrome or not
bool ispalindrome(int i,string s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return ispalindrome(i+1,s);
    
}
int main(){
    // int n;
    // cin>>n;

    // cout<<"Problem 1"<<endl;
    // printname(1,n);
    // cout<<endl;

    // cout<<"Problem 2"<<endl;
    // printinc(1,n);
    // cout<<endl;

    // cout<<"Problem 3"<<endl;
    // printdec(n,n);
    // cout<<endl;

    // cout<<"Problem 4"<<endl;
    // cout<<sum(n);
    // cout<<endl;

    // cout<<"Problem 5"<<endl;
    // sum1(n,0);
    // cout<<endl;

    // cout<<"Problem 6"<<endl;
    // cout<<factorial(n);
    // cout<<endl;

    // cout<<"Problem 7"<<endl;
    // factorial1(n,1);
    // cout<<endl;

    // cout<<"Problem 8"<<endl;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // reversearray(0,arr,n);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    cout<<"Problem 9"<<endl;
    string s="madam";
    if (ispalindrome(0,s)==true){
    cout<<"Palindrome"<<endl;}
    else cout<<"Not Palindrome"<<endl;
    // cout<<ispalindrome(0,s);


    return 0;
}