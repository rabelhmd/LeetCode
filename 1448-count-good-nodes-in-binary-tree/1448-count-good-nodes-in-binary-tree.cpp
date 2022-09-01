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
    
    void pre(TreeNode* root, int mx, int & count) {
        if(!root) return;
        if(root -> val >= mx) mx = root -> val, count += 1;
        pre(root->left, mx, count);
        pre(root->right, mx, count);
    }
    
    int goodNodes(TreeNode* root) {
        int count = 0;
        pre(root, INT_MIN, count);
        return count;
    }
};