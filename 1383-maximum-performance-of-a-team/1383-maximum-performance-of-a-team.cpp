class Solution {
public:
    const int mod = (int)1e9 + 7;
    
    int maxPerformance(int n, vector<int> &speed, vector<int> &efficiency, int k) {
        
      priority_queue<int, vector<int>, greater<int>> pq;
      vector<pair<int, int>> v;
      for (int i = 0; i < n; i++) {
        v.push_back({efficiency[i], speed[i]});
      }
        
      sort(v.rbegin(), v.rend()); 
      long totSpeed = 0, ans = 0;
        
      for (int i = 0; i < n; i++) {
        
          
        if (pq.size() == k) {
          totSpeed -= pq.top();
          pq.pop();
        }
		
        int currEff = v[i].first;
        int currSpeed = v[i].second;
        pq.push(currSpeed); 
		
        totSpeed += currSpeed; 
        ans = max(ans, totSpeed * currEff);
        //ans %= mod;
      }
        
      return ans % mod;
    }
};