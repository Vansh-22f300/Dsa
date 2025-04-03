#include<iostream>
using namespace std;
void toh(int n,char src,char helper,char des){
    if(n==0){
        return;
    }
    //recursive
    toh(n-1,src, des,helper);       //take N-1 discs from src to helper and ///////desc will acts as helper here
    cout<<"Move disk "<<n<<" from "<<src<<" to "<<des<<endl;        //Move Nth disk from src to des
    toh(n-1,helper,src,des);            //take N-1 discs from helper to des //////src will act as a helper here


}
int main(){
    int n=4;
    toh(n,'A','B','C');
}   //MOVING FROM A TO C 