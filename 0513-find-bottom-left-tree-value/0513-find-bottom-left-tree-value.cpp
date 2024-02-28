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
    void dfs(TreeNode* root, int height, int &ret, int &level) {
        if(!root) return;
        if(height > level) {
            ret = root -> val;
            level = height;
        }
        dfs(root -> left, height + 1, ret, level);
        dfs(root -> right, height + 1, ret, level);
    }
    
    int findBottomLeftValue(TreeNode* root) {
        int ret = 0, level = -1;
        dfs(root, 0, ret, level);
        return ret;
    }
};