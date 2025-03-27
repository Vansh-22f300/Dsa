#include<iostream>
using namespace std;
int main(){
    //intersection of two arrays
    int n;
    int m;
    cin>>n;
    cin>>m;
    int ispattern[10005];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ispattern[x]++;
        // cout<<x<<" ";
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(ispattern[x]>0){
            cout<<" ";
            ispattern[x]--;
        }
}
}
// *  ****
// *  *   
// *  *   
// *******
//    *  *
//    *  * 
// ****  *