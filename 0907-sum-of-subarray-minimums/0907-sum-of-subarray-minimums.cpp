class Solution {
public:
    const int mod = 1000000000 + 7;
    
    vector <int> getLeft(int &len, vector <int> &arr) {
        stack<int> St;
        vector <int> left(len);
        for(int i = 0; i < len; i++) {
            while(!St.empty()) {
                int top = St.top();
                if(arr[top] <= arr[i]) break;
                St.pop();
            }
            left[i] = St.empty() ? i + 1 : i - St.top();
            St.push(i);
        }
        return left;
    }
    
    vector <int> getRight(int &len, vector <int> &arr) {
        stack<int> St;
        vector <int> right(len);
        for(int i = len-1; i >= 0; i--) {
            while(!St.empty()) {
                int top = St.top();
                if(arr[top] < arr[i]) break;
                St.pop();
            }
            right[i] = St.empty() ? len-i : St.top() - i;
            St.push(i);
        }
        return right;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int len = arr.size();
        vector <int> left = getLeft(len, arr);
        vector <int> right = getRight(len, arr);
        int sum = 0;
        for(int i = 0; i < len; i++) {
            sum = (sum+1ll*arr[i]*left[i]*right[i])%mod;
        }
        return sum;
    }
};