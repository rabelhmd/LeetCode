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
    
    TreeNode* build(TreeNode* root, int val) {
        if(!root) return root;
        if(root->val > val) return build(root->left, val);
        else if(root-> val < val) return build(root->right, val);
        return root;
    }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        return build(root, val);
    }
};