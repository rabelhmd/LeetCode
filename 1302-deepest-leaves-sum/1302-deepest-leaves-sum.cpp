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
    
    void dfs(TreeNode* root, int level, vector <vector<int>>& res) {
        if(!root) return;
        if(res.size() == level) res.push_back({});
        res[level].push_back(root->val);
        dfs(root->left, level+1, res);
        dfs(root->right, level+1, res);
    }
    
    int deepestLeavesSum(TreeNode* root, bool isLeft = false) {
        vector <vector<int>> res;
        dfs(root, 0, res);
        int sum = 0;
        int len = res.size();
        if(len) {
            vector <int> v = res[len-1];
            for(auto &c: v) sum += c;
        }
        return sum;
    }
};