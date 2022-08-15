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
/*
ITERATIVE SOLUTION:
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        map<int,int> mp;
        vector<int> res;
        if(!root) return res;
        
        q.push({root,0});
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            TreeNode* node = it.first;
            int level = it.second;
            
            mp[level] = node->val;
            
            if(node->left!=NULL) q.push({node->left, level+1});
            if(node->right!=NULL) q.push({node->right, level+1});
        }
        
        for(auto it: mp){
            res.push_back(it.second);
        }
        return res;
    }
};
*/
class Solution {
public:
    void helper(TreeNode* node, int level, vector<int> &res){
        if(node==NULL) return;
        if(level == res.size()) res.push_back(node->val);
        helper(node->right, level+1, res);
        helper(node->left, level+1, res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        helper(root, 0, res);
        return res;
    }
};