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
    void dfs(TreeNode* root, string cur, string& ret) {
        if(!root) return;
        cur.insert(cur.begin(), 'a' + root -> val);
        if(!root -> left and !root -> right) {
            ret = (ret == "" ? cur : min(ret, cur));
        }
        dfs(root -> left, cur, ret);
        dfs(root -> right, cur, ret);
        cur.erase(cur.begin());
    }
    
    string smallestFromLeaf(TreeNode* root) {
        string ret;
        dfs(root, "", ret);
        return ret;
    }
};