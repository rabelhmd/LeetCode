class Solution {
public:
    bool canPlaceFlowers(vector<int>& flower, int n) {
        flower.insert(flower.begin(), 0); flower.push_back(0);
        
        int len = flower.size();
        for(int i = 1; i < len-1; i++) {
            if(flower[i-1] + flower[i] + flower[i+1] == 0) {
                i += 1, n -= 1;
                if(!n) return true;
            }
        }
        return n <= 0;
    }
};