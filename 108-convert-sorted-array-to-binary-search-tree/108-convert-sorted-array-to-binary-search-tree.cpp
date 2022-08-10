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
    
    TreeNode* makeBST(vector<int>& nums, int start, int end) {
        if(end <= start) return NULL;
        int m = (start + end) / 2;
        int cur = nums[m];
        
        TreeNode* root = new TreeNode(cur);
        root -> left = makeBST(nums, start, m);
        root -> right = makeBST(nums, m + 1, end);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeBST(nums, 0, nums.size());
    }
};