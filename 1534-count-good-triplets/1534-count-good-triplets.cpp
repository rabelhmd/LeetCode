class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int len = arr.size(), ret = 0;
        for(int i = 0; i < len; i++) {
            for(int j = i + 1; j < len; j++) {
                for(int k = j + 1; k < len; k++) {
                    int x = abs(arr[i] - arr[j]);
                    int y = abs(arr[j] - arr[k]);
                    int z = abs(arr[i] - arr[k]);
                    ret += (x <= a && y <= b && z <= c);
                }
            }
        }
        return ret;
    }
};