class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        
        int x = 0, y = people.size()-1, ret = 0;
        while(x <= y) {
            ret += 1;
            if(people[x] + people[y] <= limit) x += 1;
            y -= 1;
        }
        return ret;
    }
};