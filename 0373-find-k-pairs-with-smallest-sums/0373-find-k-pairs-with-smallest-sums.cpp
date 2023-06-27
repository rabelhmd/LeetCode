class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        priority_queue<pair<int,pair<int,int>>> pq;
        int len1 = nums1.size(), len2 = nums2.size();
        for(int i = 0; i < len1; i++) {
            for(int j = 0; j < len2; j++) {
                int cur = nums1[i] + nums2[j];
                if(pq.size() < k) {
                    pq.push({cur, {nums1[i], nums2[j]}});
                }
                else if(cur < pq.top().first){
                    pq.pop();
                    pq.push({cur,{nums1[i], nums2[j]}});
                } else break;
            }
        }
        
        vector <vector <int>> ret;
        while(!pq.empty()) {
            ret.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};