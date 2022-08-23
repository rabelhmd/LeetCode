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
    
    bool isPalin(vector <int>& v) {
        int len = v.size();
        for(int i = 0, j = len-1; i < len/2; i++, j--) {
            if(v[i] != v[j]) return false;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        vector <int> v;
        while(head) {
            v.push_back(head->val);
            head = head -> next;
        }
        return isPalin(v);
    }
};