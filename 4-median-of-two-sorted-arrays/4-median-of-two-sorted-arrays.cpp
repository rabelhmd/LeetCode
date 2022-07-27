class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto x: nums2) nums1.push_back(x);
        sort(nums1.begin(), nums1.end());
        int len = nums1.size();
        if(len == 1) return nums1[0];
        if(len % 2 == 0) {
            len /= 2;
            return (double) (nums1[len-1] + nums1[len]) / 2.0;
        } 
        return (double) (nums1[len/2]);
    }
};