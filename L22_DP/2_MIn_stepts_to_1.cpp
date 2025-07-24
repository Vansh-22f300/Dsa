#include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int recursion(int n) {
    if (n <= 1) return 0; // Base case: 0 steps to reach 0 or 1

    int op1 = INT_MAX, op2 = INT_MAX, op3 = INT_MAX;
    op1= recursion(n - 1); // Step 1: subtract 1
    // Check if n is divisible by 2 or 3 before making recursive calls
    if (n % 2 == 0) op2 = recursion(n / 2); // Step 2: divide by 2
    if (n % 3 == 0) op3 = recursion(n / 3); // Step 3: divide by 3
    // Step 1: Subtract 1 is always available
    return 1 + min({op1, op2, op3});
} 
  
// Memoization approach
int topdown(int n, vector<int> &dp) {
    if (n == 1) return 0; // Base case: 0 steps to reach 0 or 1
   
    if (dp[n] != -1) return dp[n]; // Return already computed value
   
    int op1 = INT_MAX, op2 = INT_MAX, op3 = INT_MAX;

    op1 = topdown(n - 1, dp); // Step 1: subtract 1

    if (n % 2 == 0) op2 = topdown(n / 2, dp); // Step 2: divide by 2
    if (n % 3 == 0) op3 = topdown(n / 3, dp); // Step 3: divide by 3

    return dp[n] = 1 + min({op1, op2, op3}); // Store result in dp array
}
//bottom up approach
int bottomup(int n){
    vector<int> dp(n + 1, 0);

    dp[1]=0;
    for(int i=2;i<=n;i++){
        int op1 = INT_MAX, op2 = INT_MAX, op3 = INT_MAX;
         op1 = dp[i - 1]; // Step 1: subtract 1
        
        if (i % 2 == 0) op2 = dp[i / 2]; // Step 2: divide by 2
        if (i % 3 == 0) op3 = dp[i / 3]; // Step 3: divide by 3

        dp[i] = 1 + min({op1, op2, op3}); // Store result in dp array
    }
    return dp[n];
}
int main(){
    int n;
    cin >> n;
    // Using recursion (inefficient for large n)
    cout << "Recursive: " << recursion(n) << endl;
    // Using top-down memoization
    vector<int> dp(n + 1, -1);
    cout << "Top-down: " << topdown(n, dp) << endl;
    // Using bottom-up approach
    cout << "Bottom-up: " << bottomup(n) << endl;
    return 0;
}
