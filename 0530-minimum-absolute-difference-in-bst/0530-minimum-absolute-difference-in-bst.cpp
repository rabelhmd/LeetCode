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
    int rec(TreeNode* root, int& val, int& mn) {
        if(root -> left) rec(root -> left, val, mn);
        if(val >= 0) mn = min(mn, root -> val - val);
        val = root -> val;
        if(root -> right) rec(root -> right, val, mn);
        return mn;
    }
    int getMinimumDifference(TreeNode* root) {
        int val = -1, mn = INT_MAX;
        return rec(root, val, mn);
    }
};