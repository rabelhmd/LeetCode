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
    
    void build(TreeNode* root, vector<int>& res) {
        if(!root) return;
        build(root -> left, res);
        res.push_back(root -> val);
        build(root -> right, res);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        build(root, res);
        return res;
    }
};