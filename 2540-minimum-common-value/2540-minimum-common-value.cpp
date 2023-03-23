class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0, iLen = nums1.size(), jLen = nums2.size();
        while(i < iLen && j < jLen) {
            if(nums1[i] == nums2[j]) return nums1[i];
            else if(nums1[i] < nums2[j]) i += 1;
            else j += 1;
        }
        return -1;
    }
};