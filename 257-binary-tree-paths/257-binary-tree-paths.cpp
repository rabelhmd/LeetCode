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
    vector <string> res;
    
    void dfs(TreeNode* root, string str) {
        if(!root->left && !root->right) {
            res.push_back(str);
            return;
        }
        if(root->left) dfs(root-> left, str + "->" + to_string(root->left->val));
        if(root->right) dfs(root-> right, str + "->" + to_string(root->right->val));
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root, to_string(root->val));
        return res;
    }
};