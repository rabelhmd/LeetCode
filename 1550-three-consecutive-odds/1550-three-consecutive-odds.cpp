class Solution {
public:
    bool isOdd(int x) {
        return x&1;
    }
    
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(isOdd(arr[i])) count += 1;
            else count = 0;
            if(count == 3) return true;
        }
        return false;
    }
};