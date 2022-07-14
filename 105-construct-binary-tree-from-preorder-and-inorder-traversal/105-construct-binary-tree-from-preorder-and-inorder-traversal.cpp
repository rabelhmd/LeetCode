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
    
    TreeNode* build(vector<int>& preo, vector<int>& ino, int& id, int left, int right) {
        if(left > right) return NULL;
        
        int pv = left;
        while(ino[pv] != preo[id]) pv += 1;

        id += 1;
        
        TreeNode* cur = new TreeNode(ino[pv]);
        cur -> left = build(preo, ino, id, left, pv - 1);
        cur -> right = build(preo, ino, id, pv + 1, right);
        return cur;
    }
    
    TreeNode* buildTree(vector<int>& preo, vector<int>& ino) {
        int id = 0, left = 0, right = ino.size()-1;
        
        return build(preo, ino, id, left, right);
    }
};