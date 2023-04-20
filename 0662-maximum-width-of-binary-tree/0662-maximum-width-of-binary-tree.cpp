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
 int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
     
        int maxWidth = 0;
        queue<pair<TreeNode*, long>> q;
        q.push({root, 1});
     
        while(!q.empty()) {
            int levelSize = q.size();
            int startPosition = q.front().second;
            int endPosition = q.back().second;
            
            maxWidth = max(maxWidth, endPosition - startPosition + 1);
            for(int i = 0; i < levelSize; ++i) {
                pair<TreeNode*,int> p = q.front();
                q.pop();
                TreeNode* node = p.first;
                int position = p.second;
                long offsettedPosition = position - startPosition; 
                if(node->left) q.push({node->left, 2*offsettedPosition});
                if(node->right) q.push({node->right, 2*offsettedPosition+1});   
            }
        }
        return maxWidth;
    }
};