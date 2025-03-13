#include <iostream>
using namespace std;
bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime" <<endl;
            return false;

        }
        else{
            cout<<"Prime" <<endl   ;

            return true;
  }
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<prime(n);
}