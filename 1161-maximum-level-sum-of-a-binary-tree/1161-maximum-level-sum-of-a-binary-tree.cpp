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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        int ret = 0, sum = INT_MIN, level = 0;
        queue <TreeNode*> q; q.push(root);
        while(!q.empty()) {
            int len = q.size(), cur = 0;
            while(len--) {
                auto fr = q.front(); q.pop();
                cur += fr -> val;
                if(fr -> left) q.push(fr -> left);
                if(fr -> right) q.push(fr -> right);
            }
            level += 1;
            if(cur > sum) ret = level;
            sum = max(sum, cur);
        }
        return ret;
    }
};