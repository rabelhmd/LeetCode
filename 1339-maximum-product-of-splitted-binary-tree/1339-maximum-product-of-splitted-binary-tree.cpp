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
    const long long mod = 1e9 + 7;
    int dfs(TreeNode* root, vector <long long> &ret) {
        if(not root) return 0;
        int level = ret.size();
        ret.push_back(root -> val);
        ret[level] += dfs(root -> right, ret) + dfs(root -> left, ret);
        return ret[level];
    }
    int maxProduct(TreeNode* root) {
        long long ret = 0;
        vector <long long> v;
        dfs(root, v);
        for (auto val: v) ret = max(val * (v[0] - val), ret);
        return ret % mod;
    }
};