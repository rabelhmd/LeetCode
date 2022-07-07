class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        
        int cur = 0;
        while(cur < n) {
            A[m++]  = B[cur++];
        }
        
        sort(A.begin(), A.end());
    }
};