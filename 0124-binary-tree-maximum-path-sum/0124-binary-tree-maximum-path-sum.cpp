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
    int dfs(TreeNode* root, int& maxSum) {
        if(not root) return 0;
        int left = max(0, dfs(root -> left, maxSum));
        int right = max(0, dfs(root -> right, maxSum));
        maxSum = max(maxSum, root -> val + left + right);
        return max(left, right) + root -> val;
    }
    int maxPathSum(TreeNode* root) {
        int ret = INT_MIN;
        dfs(root, ret);
        return ret;
    }
};