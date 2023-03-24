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
    int getMinimumDifference(TreeNode* root) {
        queue <TreeNode*> q; q.push(root);
        vector <int> v; while(!q.empty()) {
            TreeNode* fr = q.front(); q.pop();
            v.push_back(fr -> val);
            if(fr -> left) q.push(fr -> left);
            if(fr -> right) q.push(fr -> right);
        }
        sort(v.begin(), v.end());
        
        int ret = INT_MAX, len = v.size();
        for(int i = 1; i < len; i++) {
            ret = min(ret, v[i]-v[i-1]);
        }
        return ret;
    }
};