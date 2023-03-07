class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left = 1;
        long long right = *max_element(time.begin(), time.end());
        right *= totalTrips;
        while (left < right) {
            long long mid = left + (right - left) / 2, trips = 0;
            for (int t : time) trips += mid / t;
            if (trips >= totalTrips) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};