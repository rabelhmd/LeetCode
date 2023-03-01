class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue <int> pq;
        for(auto &x: nums) pq.push(-x);
        vector<int> ret;
        while(pq.empty() == false) {
            ret.push_back(-pq.top());
            pq.pop();
        }
        return ret;
    }
};