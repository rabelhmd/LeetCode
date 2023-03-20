class Solution {
public:
    bool canPlaceFlowers(vector<int>& flower, int n) {
        if(!n) return true;
        int len = flower.size();
        for(int i = 0; i < len; i++) {
            if(!flower[i] && (!i || !flower[i-1]) && (i == len-1 || !flower[i+1])) {
                flower[i] = 1, n--;
                if(!n) return true;
            }
        }
        return false;
    }
};