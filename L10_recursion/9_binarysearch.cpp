#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

int binarysearch(int arr[], int s, int e, int key) {
    if (s > e) {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] > key) {
        return binarysearch(arr, s, mid - 1, key);
    } else {
        return binarysearch(arr, mid + 1, e, key);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    int s = 0;
    int e = n - 1;
    cout << binarysearch(arr, s, e, key);
    return 0;
}
