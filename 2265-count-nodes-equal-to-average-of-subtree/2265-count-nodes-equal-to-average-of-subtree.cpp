class Solution {
public:    
    int f(TreeNode* root) {
        if(!root) return 0;  
        if(!root->left && !root->right) return 1;
        return 1 + f(root->left) + f(root->right);
    }
    
    int sum(TreeNode* root) {
        if(!root) return 0;    
        return root->val + sum(root->left) +  sum(root->right);
    }
    
    int averageOfSubtree(TreeNode* root) {
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        return (sum(root)/f(root)==root->val) + averageOfSubtree(root->left) + averageOfSubtree(root->right);

    }
};