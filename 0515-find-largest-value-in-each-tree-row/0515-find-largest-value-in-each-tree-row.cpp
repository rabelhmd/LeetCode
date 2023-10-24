class Solution {
    vector<int> ret;
public:
    void helper(TreeNode* node, int cl) {
        if (!node) return;
        if (ret.size() < cl + 1) {
            ret.push_back(node->val);
        } else {
            if (ret[cl] < node->val) {
                ret[cl] = node->val;
            }
        }
        helper(node->left, cl+1);
        helper(node->right, cl+1);
    }
    
    vector<int> largestValues(TreeNode* root) {
        if(root == NULL) return ret;
        helper(root, 0);
        return ret;
    }
};