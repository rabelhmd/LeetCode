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
    int ret;
    void dfs(TreeNode* root, long position, int depth, vector<int>& levelLefts) {
        if(depth >= levelLefts.size()) {
            levelLefts.push_back(position);
        }
        ret = max(ret, (int) position - levelLefts[depth] + 1);
        if(root->left) {
            dfs(root->left,  2*(position - levelLefts[depth]), depth + 1, levelLefts);
        }
        if(root->right) {
            dfs(root->right, 2*(position - levelLefts[depth]) + 1, depth + 1, levelLefts);
        }
    }
    
    int widthOfBinaryTree(TreeNode* root) {
        vector<int> levelLefts;
        dfs(root, 1, 0, levelLefts);
        return ret;
    }
};