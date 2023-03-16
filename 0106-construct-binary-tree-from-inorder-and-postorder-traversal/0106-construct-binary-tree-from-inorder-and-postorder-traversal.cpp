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
    TreeNode* rec(vector<int>& ino, vector<int>& post, int& pos, int left, int right) {
        if(left > right) return NULL;
        int x = right; while(post[pos] != ino[x]) x -= 1;
        pos -= 1;
        TreeNode* root = new TreeNode(ino[x]);
        root -> right  = rec(ino, post, pos, x + 1, right);
        root -> left   =  rec(ino, post, pos, left, x - 1);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& ino, vector<int>& post) {
        int pos = post.size() - 1;
        return rec(ino, post, pos, 0, ino.size() - 1);
    }
};