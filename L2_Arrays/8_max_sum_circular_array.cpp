#include <iostream>
#include <climits>
using namespace std;

int kadanes(int a[], int n) {
    int sum = 0;
    int ans = INT_MIN;
    bool isPositivePresent = false;

    for (int i = 0; i < n; ++i) {
        if (a[i] >= 0) {
            isPositivePresent = true;
        }
        ans = max(ans, a[i]); // If all elements are negative, ans will be the max element.
    }

    if (isPositivePresent) {
        // Kadane's Algorithm
        for (int i = 0; i < n; ++i) {
            sum += a[i];
            if (sum < 0) sum = 0;
            ans = max(ans, sum);
        }
    }
    return ans;
}

int maxcircularsum(int a[], int n) {
    int x = kadanes(a, n);  // Maximum subarray sum using Kadane’s Algorithm
    int y = 0;

    for (int i = 0; i < n; i++) {
        y += a[i]; // Total sum of the array
        a[i] *= -1; // Invert elements
    }

    int z = kadanes(a, n);  // Maximum sum of inverted array

    if (y + z == 0) return x;  // If all elements are negative, return x
    return max(x, (y + z));  // Compare non-circular and circular subarray sum
}

int main() {
        // int n;
        // cin >> n;  // Size of array
        // int arr[n];

        // for (int i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }
        int arr[] = {8, -8, 9 ,-9 ,10, -11, 12}; 
        int n = sizeof(arr) / sizeof(int);

        cout << maxcircularsum(arr, n) << endl;  // Output result for each test case
        //ans = 22

    return 0;
}