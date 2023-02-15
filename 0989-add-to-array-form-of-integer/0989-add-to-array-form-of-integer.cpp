class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector <int> ret;
        int len = num.size() - 1, carry = 0;
        while(k > 0 or len >= 0) {
            int n = (k > 0 ? k%10 : 0) + (len >= 0 ? num[len] : 0) + carry;
            ret.push_back(n % 10);
            carry = n/10, len -= 1, k /= 10;
        }
        if(carry) ret.push_back(carry);
        reverse(ret.begin(), ret.end());
        return ret;
    }
};