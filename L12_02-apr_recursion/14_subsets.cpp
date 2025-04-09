// Given an integer array input of unique elements, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.
// Example 1:
// Input: input = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

class Solution {
    public:
        vector<vector<int>> ans;

        void subsets(vector<int>& input, vector<int>& output, int index) {
            // Base case
            if (index >= input.size()) {
                ans.push_back(output);
                return;
            }
    
            // Exclude current element
            subsets(input, output, index + 1);
    
            // Include current element
            output.push_back(input[index]);
            subsets(input, output, index + 1);
            output.pop_back();
        }
    
        vector<vector<int>> subsets(vector<int>& input) {
            vector<int> output;
            subsets(input, output, 0);
            return ans;
        }
    };
    

