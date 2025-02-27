#include <iostream>
using namespace std;
int main(){
    int arr[]={1,5,10};
    int N=20;
    int arr_size=sizeof(arr)/sizeof(int);
    int next_number_needed=1;
    int generate_till=0;
    int i=0;
    int patching_count=0;

    while(generate_till<N){
        if(arr[i]<=generate_till) {
            generate_till+=arr[i];
            i++;

        }
        else{
            generate_till+=generate_till+1;
            patching_count++;
        } 
 
    }
    cout<<patching_count;
    return 0;
}        


