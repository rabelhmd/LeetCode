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

    void rec(TreeNode* root, vector <int>& ret) {
        if(!root) return;
        if(!root -> left && !root -> right) {
            ret.push_back(root -> val);
        }
        rec(root -> left, ret);
        rec(root -> right, ret);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> leafs1, leafs2;
        rec(root1, leafs1);
        rec(root2, leafs2);
        return leafs1 == leafs2;
    }
};