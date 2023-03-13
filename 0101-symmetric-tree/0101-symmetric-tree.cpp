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
    bool build(TreeNode* left, TreeNode* right) {
        if(!left or !right) return left == right;
        if(left -> val != right -> val) return false;
        bool l = build(left -> left, right -> right);
        bool r = build(left -> right, right -> left);
        return l and r;
    }

    bool isSymmetric(TreeNode* root) {
        return !root or build(root -> left, root -> right);
    }
};