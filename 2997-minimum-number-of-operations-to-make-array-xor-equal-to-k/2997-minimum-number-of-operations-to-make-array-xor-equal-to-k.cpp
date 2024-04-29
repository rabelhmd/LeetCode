class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        return __builtin_popcount(reduce(begin(nums), end(nums), k, bit_xor<>()));
    }
};