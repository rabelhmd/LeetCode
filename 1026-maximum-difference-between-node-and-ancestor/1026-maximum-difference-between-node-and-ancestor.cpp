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
    int dfs(TreeNode* root, int _min, int _max) {
        if(!root) return (_max - _min);
        _max = max(root -> val, _max);
        _min = min(root -> val, _min);
        return max(dfs(root -> left, _min, _max), dfs(root -> right, _min, _max));
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root) return 0;
        return dfs(root, root -> val, root -> val);
    }
};