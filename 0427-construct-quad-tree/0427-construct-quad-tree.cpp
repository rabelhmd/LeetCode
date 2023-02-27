/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    Node* build(vector<vector<int>>& grid, int x1, int y1, int x2, int y2) {
        if (x1 >= x2 || y1 >= y2) return nullptr;
        
        int val = grid[x1][y1];
        bool isLeaf = true;
        for (int i = x1; i < x2; i++) {
            for (int j = y1; j < y2; j++) {
                if (grid[i][j] != val) {
                    isLeaf = false;
                    break;
                }
            }
            if (!isLeaf) break;
        }
        if (isLeaf) return new Node(val, true);
        
        int x = (x1 + x2) / 2, y = (y1 + y2) / 2;
        Node* topLeft = build(grid, x1, y1, x, y);
        Node* topRight = build(grid, x1, y, x, y2);
        Node* bottomLeft = build(grid, x, y1, x2, y);
        Node* bottomRight = build(grid, x, y, x2, y2);
        return new Node(false, false, topLeft, topRight, bottomLeft, bottomRight);
    }
    
    Node* construct(vector<vector<int>>& grid) {
        int len = grid.size();
        return build(grid, 0, 0, len, len);
    }
};