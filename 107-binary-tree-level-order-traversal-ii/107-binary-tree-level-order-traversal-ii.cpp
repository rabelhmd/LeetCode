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
    
    void build(TreeNode* root, int level, vector<vector<int>>& res) {
        if(!root) return;
        if(level == res.size()) res.push_back({});
        
        res[level].push_back(root -> val);
        build(root -> left, level + 1, res);
        build(root -> right, level + 1, res);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        build(root, 0, res);
        
        reverse(res.begin(), res.end());
        return res;
    }
};