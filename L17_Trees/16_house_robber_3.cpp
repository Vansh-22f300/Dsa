/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Pair{
    public:
            int chorikari;
            int chorinahikari;
} ;
class Solution {
public:
    Pair solve(TreeNode* root){
        if(!root){
            return {0,0};
        }
    
    Pair left=solve(root->left);
    Pair right=solve(root->right);

    Pair p;
    p.chorikari=root->val+left.chorinahikari+right.chorinahikari;
    p.chorinahikari=std::max(left.chorikari,left.chorinahikari)+std::max(right.chorikari,right.chorinahikari);


    }

    int rob(TreeNode* root) {
        Pair ans=solve(root);
        return std::max(ans.chorinahikari,ans.chorikari);
        
    }
};