class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int len = arr.size();
        double start = 0.05 * len;
        double limit = len - start, sum = 0, count = 0;
        for(int i = start; i < limit; i++) {
            sum += arr[i], count += 1;
        }
        return sum / count;
    }
};