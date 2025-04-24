// Given an array of integers temperatures represents the daily temperatures, 
// return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. 
// If there is no future day for which this is possible, keep answer[i] == 0 instead.


// Example 1:
// Input: temperatures = [73,74,75,71,69,72,76,73]
// Output: [1,1,4,2,1,1,0,0]


class Solution {
    public:
        vector<int> dailyTemperatures(vector<int>& temperatures) {
            int n=temperatures.size();
            stack<int> s;
       
            vector<int> ans(n,0);
            for(int i=n-1;i>=0;i--){
                int curr=temperatures[i];
                while(!s.empty() && temperatures[s.top()]<=curr){
                    s.pop();
                }
                if (!s.empty()) {
                    ans[i] = s.top() - i;
                }
                s.push(i);
            }
            
            return ans;
        }
    };