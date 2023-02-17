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
    
    void build(TreeNode* root, vector <int> &order) {
        if(!root) return;
        build(root -> left, order);
        order.push_back(root -> val);
        build(root -> right, order);
    }
    
    int minDiffInBST(TreeNode* root) {
        vector <int> ret;
        build(root, ret);
        int mn = INT_MAX, len = ret.size();
        for(int i = 0; i < len-1; i++) {
            mn = min(mn, ret[i+1] - ret[i]);
        }
        return mn;
    }
};