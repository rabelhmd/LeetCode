class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight = -1, totalWeights = 0;
        for(int w: weights) {
            maxWeight = max(maxWeight, w);
            totalWeights += w;
        }
        
        while(maxWeight < totalWeights) {
            int mid = maxWeight + (totalWeights - maxWeight) / 2;
            int daysNeeded = 1, curWeight = 0;
            for(int w: weights) {
                if(curWeight + w > mid) {
                    daysNeeded += 1;
                    curWeight = 0;
                }
                curWeight += w;
            }
            if(daysNeeded > days) {
                maxWeight = mid + 1;
            } else {
                totalWeights = mid;
            }
        }
        return maxWeight;
    }
};

