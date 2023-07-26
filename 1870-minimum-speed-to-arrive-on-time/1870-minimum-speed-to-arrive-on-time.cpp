class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        if (hour <= dist.size() - 1) return -1;
        
        int l = 1, r = 10000000;
        while (l < r) {
            int m = (l + r) / 2, time = 0;
            for (int i = 0; i < dist.size() - 1; ++i)
                time += dist[i] / m + (dist[i] % m ? 1 : 0);
            if ((double)dist.back() / m + time <= hour)
                r = m;
            else
                l = m + 1;
        }
        return l;
    }
};