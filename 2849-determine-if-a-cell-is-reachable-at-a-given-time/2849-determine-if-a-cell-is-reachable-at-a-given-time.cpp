class Solution {
public:
    bool isReachableAtTime(int x1, int y1, int x2, int y2, int t) {
        int x = abs(x1-x2);
        int y = abs(y1-y2);
        if(!x and !y and t == 1) return false;
        return (min(x, y) + abs(x - y) <= t);
    }
};