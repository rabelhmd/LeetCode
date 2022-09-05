/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void levelWise(Node* root, vector<vector<int>>& res) {
        if(!root) return;
        
        queue<Node*> Q;
        Q.push(root);
        while(!Q.empty()) {
            vector<int> cur;
            int size = Q.size();
            
            for(int i = 0; i < size; i++) {
                Node* temp = Q.front(); Q.pop();
                cur.push_back(temp -> val);
                
                for(auto &child: temp -> children)
                    Q.push(child);
            }
            res.push_back(cur);
        }
    }
    
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        levelWise(root, res);
        return res;
    }
};