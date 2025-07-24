#include <iostream>
#include <vector>
using namespace std;

// 1. Recursive approach (inefficient)
int solve(int n) {
    if (n <= 1) return n;
    return solve(n - 1) + solve(n - 2);
}

// 2. Top-down DP (Memoization)
int fibo(int n, vector<int> &dp) {
    if (n <= 1) return dp[n] = n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}

// 3. Bottom-up DP (Tabulation)
int bottomUp(int n) {
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    int n = 1000;
    
    // Using simple recursion (Not recommended for large n)
    cout << "Recursive: " << solve(n) << endl;

    // Using top-down memoization
    vector<int> dp(n + 1, -1);
    cout << "Top-Down DP: " << fibo(n, dp) << endl;

    // Using bottom-up approach
    cout << "Bottom-Up DP: " << bottomUp(n) << endl;

    return 0;
}
