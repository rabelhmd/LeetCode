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
    
    int sum = 0;
    void dfs(TreeNode* root, string& str) {
        if(!root) return;
        str += to_string(root->val);
        if(!root->left && !root->right) {
            sum += stoi(str);
        } else {
            dfs(root->left, str);
            dfs(root->right, str);
        }
        str.pop_back();
    }
    
    int sumNumbers(TreeNode* root) {
        string str;
        dfs(root, str);
        return sum;
    }
};