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
    
    void build(TreeNode* root, vector <int>& res) {
        if(!root) return;
        res.push_back(root->val);
        build(root-> left, res);
        build(root-> right, res);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        vector <int> res;
        build(root, res);
        sort(res.begin(), res.end());
        int id = 0, len = res.size();
        while(id < len && res[id] == res[0]) id += 1;
        if(id < len) return res[id];
        return -1;
    }
};