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
    void dfs(TreeNode* root, map <int, int>& Mp, int level) {
        if(!root) return;
        Mp[++level] += root -> val;
        dfs(root -> left, Mp, level);
        dfs(root -> right, Mp, level);
    }
    
    int maxLevelSum(TreeNode* root) {
        map <int, int> Mp; int level = 0, mx = INT_MIN;
        dfs(root, Mp, level);
        level = 0;
        for(auto& it: Mp) {
            if(it.second > mx) {
                mx = it.second;
                level = it.first;
            }
        }
        return level;
    }
};