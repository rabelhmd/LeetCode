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
    
    pair<bool,int> dfs(TreeNode* root, int start, int &ret) {
        if(!root) return {false, 0};
        
        pair<bool,int>p1 = dfs(root->left,start, ret);
        pair<bool,int>p2 = dfs(root->right,start, ret);
        
        if(root->val == start) {
            ret = max(ret, max(p1.second, p2.second));
            return {true, 0};
        }
        
        if(p1.first) {
            ret = max(ret, 1 + p1.second + p2.second);
            return {true, 1 + p1.second};
        }
        else if(p2.first) {
            ret = max(ret, 1 + p1.second + p2.second);
            return {true, 1 + p2.second};
        }
        return {false, 1 + max(p1.second, p2.second)};
    }
    
    int amountOfTime(TreeNode* root, int start) {
        int ret = 0;
        dfs(root, start, ret);
        return ret;
    }
};