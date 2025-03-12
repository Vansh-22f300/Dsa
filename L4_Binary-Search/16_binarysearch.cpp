#include <iostream>
using namespace std;

// Binary Search is an efficient algorithm for finding an item from a sorted list of items.
// It works by repeatedly dividing the search interval in half.
// If the value of the search key is less than the item in the middle of the interval, it narrows the interval to the lower half. Otherwise, it narrows it to the upper half. Repeatedly check until the value is found or the interval is empty.

int binarySearch(int arr[], int n, int target) {

    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids overflow in (left + right) / 2
        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            left = mid + 1; // Narrow search to upper half
        } else {
            right = mid - 1; // Narrow search to lower half
        }
    }
    return -1; // Target not found
}

int main(){
    int arr[]={0,1,2,4,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int target=9;
    cout<<binarySearch(arr,n,target);




}