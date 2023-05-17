/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector <int> v; while(head) {
            v.push_back(head -> val);
            head = head -> next;
        }
        
        int ret = 0, len = v.size(), i = 0, j = len - 1, half = len / 2;
        while(half-- > 0) {
            ret = max(ret, v[i++] + v[j--]);
        }
        return ret;
    }
};