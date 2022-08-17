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
    void inOrder(TreeNode* root, set<int> &s){
        if(root==NULL) return;
        inOrder(root->left, s);
        s.insert(root->val);
        inOrder(root->right, s);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> s;
        inOrder(root, s);
        if(s.size()==1) return -1;
        auto it = s.begin();
        it++;
        return *it;
    }
};