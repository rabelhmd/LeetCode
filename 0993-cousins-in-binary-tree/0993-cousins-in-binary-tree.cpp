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
    
    void build(TreeNode* root, int level, int& x, int &y, int& xLevel, int& yLevel, int& xParent, int& yParent, int par) {
        if(!root) return;
        if(root -> val == x) xLevel = level, xParent = par;
        if(root -> val == y) yLevel = level, yParent = par; 
        build(root->left, level + 1, x, y, xLevel, yLevel, xParent, yParent, root -> val);
        build(root->right, level + 1, x, y, xLevel, yLevel, xParent, yParent, root -> val);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        int xLevel = -1, yLevel = INT_MAX, xParent = -1, yParent = -1;
        build(root, 0, x, y, xLevel, yLevel, xParent, yParent, root -> val);
        return xLevel == yLevel and xParent != yParent;
    }
};