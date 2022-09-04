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
    
    void rec(TreeNode* root, int x, int level, map <int, map<int, multiset <int>>> &nodes) {
        if(!root) return;
        nodes[x][level].insert(root -> val);
        rec(root->left, x-1, level+1, nodes);
        rec(root->right, x+1, level+1, nodes);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map <int, map<int, multiset <int>>> nodes;
        rec(root, 0, 0, nodes);
        for(auto &it: nodes) {
            vector<int> col;
            for(auto &temp : it.second) {
                col.insert(col.end(), temp.second.begin(), temp.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};