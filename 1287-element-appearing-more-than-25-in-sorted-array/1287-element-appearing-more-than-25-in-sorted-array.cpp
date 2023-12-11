class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int len = arr.size();
        int percent = len * 0.25;
        for(int i = 0; i < len - percent; i++) {
            if(arr[i] == arr[i + percent]) return arr[i];
        }
        return -1;
    }
};