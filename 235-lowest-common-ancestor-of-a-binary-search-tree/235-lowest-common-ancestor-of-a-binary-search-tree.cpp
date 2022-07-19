/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(true) {
            if(root->val >= p-> val && root-> val <= q->val) {
                return root;
            } else if(root->val >= q-> val && root-> val <= p->val) {
                return root;
            }
            if(root->val > q-> val && root-> val > p->val) {
                root = root->left;
                continue;
            }
            root = root->right;
        }
        return NULL;
    }
};