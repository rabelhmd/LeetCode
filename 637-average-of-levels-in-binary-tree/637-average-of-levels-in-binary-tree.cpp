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
    
    void build(TreeNode* root, int level, vector <vector<double>>& cur) {
        if(!root) return;
        if(level == cur.size()) cur.push_back({});
        
        cur[level].push_back(root -> val);
        build(root->left, level + 1, cur);
        build(root->right, level + 1, cur);
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        vector <double> res;
        vector <vector<double>> cur;
        build(root, 0, cur);
        
        for(auto &level: cur) {
            double sum = 0.0;
            for(auto &x: level) {
                sum += x;
            }
            res.push_back(sum/level.size());
        }
        return res;
    }
};