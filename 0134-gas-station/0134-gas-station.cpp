class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int len = gas.size();
        int start = 0, total = 0, tank = 0;
        
        for(int i = 0; i < len; i++) {
            tank += (gas[i] - cost[i]);
            if(tank < 0) {
                total += tank, tank = 0, start = i + 1;
            }
        }
        return total + tank >= 0 ? start : -1;
    }
};