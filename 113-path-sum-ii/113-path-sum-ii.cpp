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
// class Solution {
// public:
    
//     void solve(TreeNode* root, int targetSum, vector<vector<int>> &res, vector<int> dummy ){
//         if(!root) return;
        
//         if(!root->left and !root->right and targetSum == root->val){
//             dummy.push_back(root->val);
//             res.push_back(dummy);
//             return;
//         }
        
//         dummy.push_back(root->val);
//         solve(root->left, targetSum-root->val, res, dummy);
//         // dummy.pop_back();
//         solve(root->right, targetSum-root->val, res, dummy);
//     }
    
//     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//         vector<vector<int>> res;
//         vector<int> dummy;
//         solve(root, targetSum, res, dummy);
//         return res;
//     }
// };

// OR

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;
    void dfs(TreeNode* root,int target){
        if(!root)return;
        v.push_back(root->val);
        target-=root->val;
        if(target==0 && !root->left && !root->right)ans.push_back(v);
        dfs(root->left,target);
        dfs(root->right,target);
        v.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root,targetSum);
        return ans;
    }
};