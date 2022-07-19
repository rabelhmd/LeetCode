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
    
    void build(TreeNode* root, int& ans, int bf) {
        bf = (bf * 2) + root->val;
        if(!root->left && !root->right) {
            ans += bf;
            return;
        }
        if(root->left) build(root->left, ans, bf);
        if(root->right) build(root->right, ans, bf);
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        build(root, ans, 0);
        return ans;
    }
};