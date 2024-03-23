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
    void reorderList(ListNode* head) {
        if(!head or !head -> next) return;
        
        vector <ListNode*> v;
        ListNode* temp = head; while(temp) {
            v.push_back(temp);
            temp = temp -> next;
        }
        int len = v.size(), l = 1, r = len-1;
        for(int i = 0; i < len; i++) {
            if(i&1) head -> next = v[l++];
            else head -> next = v[r--];
            head = head -> next;
        }
        head -> next = NULL;
    }
};