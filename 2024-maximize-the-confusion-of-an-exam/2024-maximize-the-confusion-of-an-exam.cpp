class Solution {
public:
    int f(string& str, int& size, char ch, int& k) {
        int count = 0, ret = 0, left = 0;
        for(int i = 0; i < size; i++) {
            if(str[i] == ch) count += 1;
            while(count > k) {
                if(str[left] == ch) count -= 1;
                left++;
            }
            ret = max(ret, i - left + 1);
        }
        return ret;
    }
    
    int maxConsecutiveAnswers(string str, int k) {
        int len = str.size();
        return max(f(str, len, 'T', k), f(str, len, 'F', k));
    }
};