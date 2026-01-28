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
    vector<int> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int> result;
        while (!q.empty()) {
            TreeNode* curr = q.front();
            result.push_back(curr->val);
            q.pop();
            if (curr -> left ) q.push(curr->left);
            if (curr -> right) q.push(curr->right);
        }
        return result;
    }
    int diff(vector<int>r) {
        int minDiff=100001;
        for (int i=0;i<r.size()-1;i++) {
            if (r[i+1]-r[i] < minDiff) {
                minDiff = r[i+1]-r[i];
            }

        }
        return minDiff;
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> r=levelOrder(root);
        sort(r.begin(),r.end());
        return diff(r);
        
    }
};