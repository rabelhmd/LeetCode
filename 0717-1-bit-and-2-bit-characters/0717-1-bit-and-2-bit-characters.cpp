class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int ret = 0, len = bits.size();
        for(int i = len-2; i >= 0 and bits[i] == 1; i--) ret += 1;
        return ret % 2 == 0;
    }
};