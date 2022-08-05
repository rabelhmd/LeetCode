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
    vector<vector<int>> res;
    void dfs(TreeNode* root, int sum, int t, vector<int>& path) {
        if(!root) return;
        sum += root->val;
        path.push_back(root->val);
        if(!root->left && !root->right) {
            if(sum == t) {
                res.push_back(path);
            }
        } else {
            dfs(root->left, sum, t, path);
            dfs(root->right, sum, t, path);
        }
        path.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        dfs(root, 0, targetSum, path);
        return res;
    }
};