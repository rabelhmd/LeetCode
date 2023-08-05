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
    
    vector<TreeNode*> build(int start, int end) {
        vector<TreeNode*> ret;
        if(start > end) {
            ret.push_back(NULL);
            return ret;
        }

        for(int i = start; i <= end; i++) {
            vector<TreeNode*> leftSub = build(start, i - 1);
            vector<TreeNode*> rightSub = build(i + 1, end);

            for(int j = 0; j < leftSub.size(); j++) {
                for(int k = 0; k < rightSub.size(); k++) {
                    TreeNode* root = new TreeNode(i);
                    root->left = leftSub[j], root->right = rightSub[k];
                    ret.push_back(root);
                }
            }
        }
        return ret;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        return build(1, n);
    }
};