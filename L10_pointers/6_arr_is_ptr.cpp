#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 11, 12, 13, 14};
    cout << *(arr + 0) << endl; // 11
    for (int i = 0; i < 5; i++)
    {

        cout << *(arr + i) << " " << arr[i] << endl;
        // cout<<arr[i]<<endl;

        // arr[i]  -->>> *(arr+i)    BOTH ARE SAME
    }
    // cout<<sizeof(arr)<<endl;
}