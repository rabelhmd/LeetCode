class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector <int> A(n+1), B(n+1);
        for(auto &x: trust) A[x[0]] += 1, B[x[1]] += 1;
        
        for(int i = 1; i <= n; i++)
            if(A[i] == 0 && B[i] == n-1) return i;
        return -1;
    }
};