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
    bool hasPathSum(TreeNode* root, int t) {
        if(!root) return false;
        if(root -> val == t && !root -> left && !root -> right) {
            return true;
        }
        int cur = t - root -> val;
        return hasPathSum(root->left, cur) || 
            hasPathSum(root->right, cur);
    }
};