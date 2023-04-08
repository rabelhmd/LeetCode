/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> Mp;
    Node* cloneGraph(Node* node) {
        if(!node) return node;
        
        if(Mp.find(node) == Mp.end()) {
            Mp[node] = new Node(node ->val, {});
            for(auto adj: node -> neighbors) {
                Mp[node] -> neighbors.push_back(cloneGraph(adj));
            }
        }
        return Mp[node];
    }
};