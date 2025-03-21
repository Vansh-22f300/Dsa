#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n) {
    int max_sum = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < n; i++) {
        curr_sum += arr[i];
        max_sum = max(max_sum, curr_sum);
        if (curr_sum < 0) curr_sum = 0;
    }
    return max_sum;
}

int circular_kadane(int arr[], int n) {
    int total_sum = 0;
    int min_sum = INT_MAX;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
        min_sum = min(min_sum, total_sum);
    }
    return total_sum - min_sum;
}

int main() {
    int arr[] = {8, -8, 9 ,-9 ,10, -11, 12};
    int n = sizeof(arr) / sizeof(int);
    int max_kadane = kadane(arr, n);
    int circular_max = circular_kadane(arr, n);

    cout << "Max sum: " << max(max_kadane, circular_max) << endl;
    return 0;
}

