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
    string serialize(TreeNode* node, unordered_map <string, vector<TreeNode*>>& Mp) {
        if(!node) return "";
        string left = serialize(node -> left, Mp), val = to_string(node -> val), right = serialize(node -> right, Mp);
        string ret = "(" + left + val + right + ")";
        Mp[ret].push_back(node);
        return ret;
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map <string, vector<TreeNode*>> Mp;
        serialize(root, Mp);
        
        vector<TreeNode*> ret;
        for(auto it = Mp.begin(); it != Mp.end(); ++it) {
            if(it->second.size() > 1) ret.push_back(it->second[0]);
        }
        return ret;
    }
};