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
    void rec(TreeNode* root, int l, int r, int& ret) {
        if(!root) return;
        ret = max(ret, l);
        ret = max(ret, r);
        rec(root->left, 0, l+1, ret);
        rec(root->right, r+1, 0, ret);
        return;
    }
    
    int longestZigZag(TreeNode* root) {
        int ret = 0;
        rec(root, 0, 0, ret);
        return ret;
    }
};