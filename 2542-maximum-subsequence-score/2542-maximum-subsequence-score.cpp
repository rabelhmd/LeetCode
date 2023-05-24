class Solution {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        faster();
        int len = nums1.size();
        priority_queue <int> pq;
        vector <pair<int, int>> v; for(int i = 0; i < len; i++) {
            v.push_back({nums2[i], nums1[i]});
        }
        sort(v.rbegin(), v.rend());
        
        long long ret = 0, sum = 0;
        for(int i = 0; i < len; i++) {
            pq.push(-v[i].second);
            sum += v[i].second;
            if(pq.size() > k) {
                sum -= (-pq.top());
                pq.pop();
            }
            if(pq.size() == k) {
                ret = max(ret, sum * (v[i].first));
            }
        }
        return ret;
    }
};
