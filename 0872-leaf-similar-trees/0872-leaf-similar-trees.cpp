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
    void helper(TreeNode* root, vector<int>& result) {
        if (!root) return; 
        if (!root->left && !root->right) {
            result.push_back(root->val);
            return;
        }
        if (root->left) helper(root->left, result);
        if (root->right) helper(root->right, result);
        
    }
    vector<int> seq(TreeNode* root) {
        vector<int> result;
        helper(root, result);
        return result;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1 = seq(root1);
        vector<int> r2 = seq(root2);
        return r1==r2;
        
    }
};