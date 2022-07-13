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
    
    bool isUni(TreeNode* root, int level, int& val) {
        if(!root) return true;
        if(root -> val != val) return false;
        
        bool left = isUni(root -> left, level + 1, val);
        bool right = isUni(root -> right, level + 1, val);
        return left && right;
    }
    
    bool isUnivalTree(TreeNode* root) {
        if(!root) return true;
        return isUni(root, 0, root -> val);
    }
};