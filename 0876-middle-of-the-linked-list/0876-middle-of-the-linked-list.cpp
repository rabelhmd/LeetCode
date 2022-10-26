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
    int half(ListNode* head) {
        int count = 0;
        while(head) {
            head = head -> next;
            count += 1;
        }
        return count/2;
    }
    
    ListNode* middleNode(ListNode* head) {
        int h = half(head);
        while(h--> 0) head = head -> next;
        return head;
    }
};