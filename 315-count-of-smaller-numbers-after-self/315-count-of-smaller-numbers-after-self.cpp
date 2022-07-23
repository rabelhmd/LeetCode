#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution {
public:
    
    vector<int> orderSet(vector <int>& nums) {
        int len = nums.size();
        vector<int> v(len);
        ordered_set <pair<int, int>> X;
        for(int i = len-1; i >= 0; i--) {
            v[i] = X.order_of_key({nums[i], 0});
            X.insert({nums[i], i});
        }
        return v;
    }
    
	vector<int> countSmaller(vector<int>& nums) {
        return orderSet(nums);
	}
};