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
    TreeNode* ret;
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!cloned) return cloned;
        if(cloned -> val == target -> val) ret = cloned;
        getTargetCopy(original, cloned -> left, target);
        getTargetCopy(original, cloned -> right, target);
        return ret;
    }
};