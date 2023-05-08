class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0, r = arr.size()-1;
        while(r - l >= k) {
            if(abs(arr[l] - x) <= abs(arr[r] - x)) r -= 1;
            else l += 1;
        }
        vector <int> ret;
        for(int i = l; i <= r; i++) ret.push_back(arr[i]);
        return ret;
    }
};