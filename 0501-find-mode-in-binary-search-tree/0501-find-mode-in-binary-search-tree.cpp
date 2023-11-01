class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> Mp;
        vector<int> ret;
        int modeCount = getModeCount(root, Mp);
        for(pair<int,int> p: Mp) {
            if(p.second == modeCount) ret.push_back(p.first);
        }
        return ret;   
    }
    
    int getModeCount(TreeNode* root, unordered_map<int, int> &Mp) {
        if(root == NULL) return 0;
        if(Mp.find(root->val) == Mp.end()) Mp.insert(pair<int, int>(root->val, 1));
        else Mp[root->val]++;
        return max(Mp[root->val], max(getModeCount(root->left, Mp), getModeCount(root->right, Mp)));
    }
};