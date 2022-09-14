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
    
    int pseudoPalindromicPaths (TreeNode* root, int mask = 0) {
        if(!root -> left && !root -> right) {
            return __builtin_popcount((1 << root->val) ^ mask) <= 1;
        }
        
        int res = 0;
        if(root -> left) {
            res += pseudoPalindromicPaths(root->left, (1 << root->val) ^ mask);
        }
        if(root -> right) {
            res += pseudoPalindromicPaths(root->right, (1 << root->val) ^ mask);
        }
        return res;
    }
};