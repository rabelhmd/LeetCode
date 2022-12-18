class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int len = temp.size();
        stack <int> St;
        vector <int> ret(len);
        for(int i = 0; i < len; i++) {
            while(!St.empty()) {
                int top = St.top();
                if(temp[top] >= temp[i]) {
                    break;
                }
                ret[top] = i - top;
                St.pop();
            }
            St.push(i);
        }
        return ret;
    }
};