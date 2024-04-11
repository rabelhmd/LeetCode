class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> stk;
        for (char &c: num) {
            while (!stk.empty() && k > 0 && stk.top() > c) {
                stk.pop();
                k--;
            }
            stk.push(c);
        }
        while (k-- > 0) stk.pop();
        
        string ret = "";
        while (!stk.empty()) {
            ret += stk.top();
            stk.pop();
        }
        reverse(ret.begin(), ret.end());
        while (ret.size() > 1 && ret[0] == '0') {
            ret.erase(ret.begin());
        }
        return ret == "" ? "0" : ret;
    }
};