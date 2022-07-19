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
    bool build(TreeNode* root, int target) {
        if(!root) return false;
        if(Mp[target - root->val]) return true;
        Mp[root->val] = true;
        return build(root-> left, target) || build(root-> right, target);
    }
    
    bool findTarget(TreeNode* root, int target) {
        return build(root, target);
    }
};