class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    bool canMakeArithmeticProgression(vector<int>& arr) {
        faster();
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0], len = arr.size();
        for(int i = 2; i < len; i++) {
            if(arr[i] - arr[i-1] != diff) return false;
        }
        return true;
    }
};