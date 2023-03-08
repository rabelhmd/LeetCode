class Solution {
public:
    bool canEatAll(const vector<int>& piles, int h, int k) {
        int hours = 0;
        for (int bananas : piles) {
            hours += (bananas + k - 1) / k;
            if (hours > h) {
                return false;
            }
        }
        return true;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.rbegin(), piles.rend());
        int n = piles.size();
        int left = 1, right = piles[0];
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canEatAll(piles, h, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
