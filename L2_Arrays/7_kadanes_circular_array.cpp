#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={2,-2,2};
    int n=sizeof(arr)/sizeof(int);
    int max_sum=INT_MIN;
    int curr_sum=0;
    for (int i = 0; i < n; i++) {
        curr_sum += arr[i];
        max_sum = max(max_sum, curr_sum);
        if (curr_sum < 0) curr_sum = 0;
    }


    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i]; // Find total sum
        arr[i] = -arr[i];    // Invert elements (to find min subarray sum)
    }
    int circular_max = total_sum + min_kadane; // Circular sum formula

    if (circular_max == 0) return max_kadane; // If all negative, return normal max
    return max(max_kadane, circular_max);



cout<<"Sum"<<max;
return 0;
}
