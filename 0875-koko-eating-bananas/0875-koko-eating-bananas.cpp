class Solution {
public:
    bool canEatAll(const vector<int>& piles, int h, int k) {
        int hours = 0;
        for (int bananas : piles) {
            hours += (bananas + k - 1) / k;
        }
        return hours <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = 1e9;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canEatAll(piles, h, mid)) {
                right = mid;
                continue;
            }
            left = mid + 1;
        }
        return left;
    }
};
