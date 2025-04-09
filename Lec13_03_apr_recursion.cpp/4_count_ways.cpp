#include<iostream>
using namespace std;

int countways(int i, int j){
    if(i==0 || j==0) return 1;

    return  countways(i-1,j) + countways(i,j-1);
}

int main(){
    int i=3;
    int j=3;
    cout<<countways(i,j);
    // cout<<countways(3,3);
    // cout<<countways(4,4);
    // cout<<countways(5,5);
    // cout<<countways(6,6);
    // cout<<countways(7,7);
    // cout<<countways(8,8);
    // cout<<countways(9,9);
}