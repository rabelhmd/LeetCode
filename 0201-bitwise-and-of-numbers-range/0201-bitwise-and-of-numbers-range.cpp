class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        return right > left ? (rangeBitwiseAnd(left/2, right/2) << 1) : left;
    }
};