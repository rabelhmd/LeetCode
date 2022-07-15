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
        
        res[level].push_back(root->val);
        build(root->left, level + 1, res);
        build(root->right, level + 1, res);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<vector<int>> res;
        build(root, 0, res);
        vector<int> v;
        for(auto vec: res) {
            for(auto x: vec) v.push_back(x);
        }
        sort(v.begin(), v.end());
        return v[k-1];
    }
};