#include <bits/stdc++.h>
using namespace std;

vector<int> nextsmallerelements(vector<int> arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevsmallerelements(vector<int> arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> heights) {
    int n = heights.size();
    vector<int> next = nextsmallerelements(heights, n);
    vector<int> prev = prevsmallerelements(heights, n);

    int area = INT_MIN;
    for (int i = 0; i < n; i++) {
        int l = heights[i];
        if (next[i] == -1) {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newarea = l * b;
        area = max(area, newarea);
    }
    return area;
}

int main() {
    int a[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(a) / sizeof(int);
    vector<int> heights(a, a + n);

    int result = largestRectangleArea(heights);
    cout << "Largest Rectangle Area: " << result << endl;

    return 0;
}
