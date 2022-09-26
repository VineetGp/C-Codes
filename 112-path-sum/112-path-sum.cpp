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
    
    bool solve(TreeNode* root, int t, int sum){
        if(root == NULL) return false;
        sum += root->val;
        if(root->left == NULL and root->right == NULL and sum == t){
            return true;
        }
        else if(root->left == NULL and root->right == NULL and sum!=t){
            return false;
        }
        
        // sum += root->val;
        // solve(root->left, t, sum);
        // sum -= root->val;
        // solve(root->right, t, sum);
        return solve(root->left, t, sum) || solve(root->right, t, sum);
        
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root, targetSum, 0);
    }
};