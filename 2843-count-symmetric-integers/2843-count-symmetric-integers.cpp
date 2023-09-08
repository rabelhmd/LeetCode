class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ret = 0;
        for(int i = low; i <= high; i++) {
            string str = to_string(i);
            int sum = 0, len = str.size();
            if(len&1) continue;
            for(int j = 0; j < len / 2; j++) sum += (str[j] - str[len - j - 1]);
            ret += (sum == 0);
        }
        return ret;
    }
};