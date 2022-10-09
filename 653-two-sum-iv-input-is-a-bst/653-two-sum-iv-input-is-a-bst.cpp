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
    unordered_map <int, bool> Mp;
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        if(Mp.find(k - root-> val) != Mp.end()) {
            return true;
        }
        Mp[root->val] = true;
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};