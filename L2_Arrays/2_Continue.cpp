#include<iostream>
using namespace std;
int main(){
    int i=0;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    while(i<n){
        cout<<i<<" ";
        if(i==3){
            i++; //To avoid Infinte loop :O/P=0 to n-1
            continue;
            // Will skip i++ when i becomes 3 and go to while loop
            //become infinite loop
        }
        i++;
    }
    return 0;
}