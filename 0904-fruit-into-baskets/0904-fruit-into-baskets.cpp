class Solution {
public:

    int totalFruit(vector<int>& fruits) {
        unordered_map <int, int> Mp;
        int count = 0, ret = 0, len = fruits.size();
        
        for(int i = 0; i < len; i++) {
            Mp[fruits[i]] += 1;
            if(Mp.size() <= 2) ret = max(ret, i-count+1);
            else {
                Mp[fruits[count]] -= 1;
                if(Mp[fruits[count]] == 0) {
                    Mp.erase(fruits[count]);
                }
                count++;
            }
        }
        return ret; 
    }
};