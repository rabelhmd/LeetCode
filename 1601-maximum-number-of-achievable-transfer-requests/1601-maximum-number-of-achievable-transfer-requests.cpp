class Solution {
public:
    int arr[21] = {};
    int maximumRequests(int n, vector<vector<int>>& requests, int pos = 0) {
        if (pos == requests.size()) 
            return count(begin(arr), begin(arr) + n, 0) == n ? 0 : INT_MIN;
        arr[requests[pos][0]] -= 1;
        arr[requests[pos][1]] += 1;
        
        auto take = 1 + maximumRequests(n, requests, pos + 1);
        arr[requests[pos][0]] += 1;
        arr[requests[pos][1]] -= 1;
        return max(take, maximumRequests(n, requests, pos + 1));
    }
};