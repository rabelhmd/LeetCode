class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
    
        queue< pair<int, int> > Q;
        int N = tickets.size();
        for(int i = 0; i < N; i++) Q.push({i, tickets[i]});

        int sum = 0;
        while (Q.empty() == false) {
            pair<int, int> q = Q.front();
            q.second--;
            Q.pop();

            sum += 1;
            if(q.second == 0 && k == q.first) break;
            if(q.second > 0) Q.push(q);
        }
        return sum;
    }
};