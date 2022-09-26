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
class Solution {
public:
    
    void solve(TreeNode* root, int targetSum, vector<vector<int>> &res, vector<int> dummy ){
        if(!root) return;
        
        if(!root->left and !root->right and targetSum == root->val){
            dummy.push_back(root->val);
            res.push_back(dummy);
            return;
        }
        
        dummy.push_back(root->val);
        solve(root->left, targetSum-root->val, res, dummy);
        // dummy.pop_back();
        solve(root->right, targetSum-root->val, res, dummy);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> dummy;
        solve(root, targetSum, res, dummy);
        return res;
    }
};