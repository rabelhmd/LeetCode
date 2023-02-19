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
    
    vector<vector<int>> zigZag(TreeNode* root) {
        vector<vector<int>> ret;
        if(!root) return ret;
        
        int count = 0, len = 0;
        queue<TreeNode*> q; q.push(root);
        while(!q.empty()) {
            
            vector <int> cur;
            len = q.size(); while(len--) {
                TreeNode* fr = q.front(); q.pop();
                cur.push_back(fr -> val);
                if(fr -> left) q.push(fr -> left);
                if(fr -> right) q.push(fr -> right);
            }
            
            if(count&1) reverse(cur.begin(), cur.end());
            ret.push_back(cur);
            count += 1;
        }
        return ret;
    }
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        return zigZag(root);
    }
};