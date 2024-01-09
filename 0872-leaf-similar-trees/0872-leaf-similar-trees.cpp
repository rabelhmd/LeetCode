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
    void getLeafs(TreeNode* root, vector <int> & ret) {
        if(!root) return;
        if(!root -> left and !root -> right) ret.push_back(root -> val);
        getLeafs(root -> left, ret);
        getLeafs(root -> right, ret);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> l1, l2;
        getLeafs(root1, l1);
        getLeafs(root2, l2);
        return l1 == l2;
    }
};