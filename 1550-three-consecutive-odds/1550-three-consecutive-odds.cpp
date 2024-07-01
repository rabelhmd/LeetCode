class Solution {
public:
    bool isOdd(int x) {
        return x&1;
    }
    bool threeConsecutiveOdds(vector<int>& arr) {
        int len = arr.size();
        if(len < 3) return false;
        for(int i = 0; i < len-2; i++) {
            int x = arr[i];
            int y = arr[i+1];
            int z = arr[i+2];
            if(isOdd(x) && isOdd(y) && isOdd(z)) return true;
        }
        return false;
    }
};