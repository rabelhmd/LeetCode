class Solution {
public:
    string predictPartyVictory(string s) {
        queue <int> rq, dq;
        int len = s.size();
        for(int i = 0; i < len; i++) {
            s[i] == 'R' ? rq.push(i) : dq.push(i);
        }
        
        while(!rq.empty() and !dq.empty()) {
            int a = rq.front(), b = dq.front();
            if(a < b) rq.push(a + len);
            else dq.push(b + len);
            rq.pop(), dq.pop();
        }
        return (rq.size() > dq.size()) ? "Radiant" : "Dire";
    }
};