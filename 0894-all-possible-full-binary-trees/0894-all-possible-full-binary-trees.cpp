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
    
    unordered_map<int, vector<TreeNode*>> Mp;
    
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ret;
        if(Mp[n].size() != 0) return Mp[n];
        if(n == 1) {
            ret.push_back(new TreeNode(0));
        } else {
            for (int i = 1; i < n; i += 2) {
                int l = i, r = n - i - 1;
                for (TreeNode* left : allPossibleFBT(l)) {
                    for (TreeNode* right : allPossibleFBT(r)) {
                        TreeNode * root = new TreeNode(0);
                        root->left = left;
                        root->right = right;
                        ret.push_back(root);
                    }
                }
            }
        }
        Mp[n] = ret;
        return ret;
    }
};