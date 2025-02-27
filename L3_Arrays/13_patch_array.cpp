// Minimum number of patches required

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
        if(generate_till>=next_number_needed)
            next_number_needed=generate_till+1;
        else {
            if(i<arr_size and next_number_needed >= arr[i]){
                generate_till+=arr[i];
                i++;
                
            }
            else{
                patching_count ++;
                generate_till+=next_number_needed;
            }
        }    
 
    }
    cout<<patching_count;
    return 0;
}        




