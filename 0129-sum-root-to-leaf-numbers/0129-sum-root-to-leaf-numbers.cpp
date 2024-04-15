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
    
    void solve(TreeNode* root, int& sum, string& str) {
        if(!root) return;
        str += to_string(root -> val);
        if(!root -> left and !root -> right) sum += stoi(str);
        else {
            solve(root -> left, sum, str);
            solve(root -> right, sum, str);
        }
        str.pop_back();
    }

    int sumNumbers(TreeNode* root) {
        string str; int ret = 0;
        solve(root, ret, str);
        return ret;
    }
};