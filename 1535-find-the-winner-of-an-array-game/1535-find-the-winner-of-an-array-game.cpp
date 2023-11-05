class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k == 1) return max(arr[0], arr[1]);
        
        if(k >= arr.size()) return *max_element(arr.begin(), arr.end());
        
        int count = 0, winner = arr[0];
        for(int i = 1; i < arr.size(); i++) {
            if(winner > arr[i]) count += 1;
            else count = 1, winner = arr[i];
            if(count == k) return winner;
        }
        return winner;
    }
};