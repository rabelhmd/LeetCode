class Solution {
public:
    
    int getMinutes(string str) {
        string H, M;
        H += str[0];
        H += str[1];
        M += str[3];
        M += str[4];
        int hr = stoi(H) * 60;
        int min = stoi(M);
        return hr + min;
    }
    
    int findMinDifference(vector<string>& timePoints) {
        vector <int> mins;
        for(auto timeStr: timePoints) mins.push_back(getMinutes(timeStr)); 
        
        sort(mins.begin(), mins.end());
        
        int len = timePoints.size(), mn = INT_MAX;
        for(int i = 1; i < len; i++) mn = min(mn, mins[i] - mins[i-1]);
        
        return min(mn, 1440-(mins[len-1] - mins[0]));
    }
};