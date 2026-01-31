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
    void helper(TreeNode* root, int low, int high,vector<int>& r) {
        if (!root) return;
        if (low<=root->val && root->val <= high) {
            r.push_back(root->val);
            helper(root->right,low,high,r);
            helper(root->left,low,high,r);
        }
        else if ( root->val < low ) helper(root->right,low,high,r);
        else if (root -> val > high) helper(root->left,low,high,r);
    

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> r;
        helper(root,low,high,r);
        int sum =0;
        for (int i=0;i<r.size();i++) {
            sum+=r[i];
        }
        return sum;

        
    }
};