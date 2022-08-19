class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map <int, int> Mp;
        for(int &x: hand) Mp[x] += 1;
        
        for(auto [key, _]: Mp) {
            while(Mp[key]) {
                for(int i = key; i < key + groupSize; i++) {
                    Mp[i] -= 1;
                    if(Mp[i] < 0) return false;
                }
            }
        }
        return true;
    }
};