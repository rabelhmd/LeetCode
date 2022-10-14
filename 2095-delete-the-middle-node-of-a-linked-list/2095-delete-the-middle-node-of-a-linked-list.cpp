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
    
    int countNodes(ListNode* head) {
        int count = 0;
        while(head) {
            head = head -> next;
            count += 1;
        }
        return count;
    }
    
    ListNode* deleteMiddle(ListNode* head) {
        if(!head) return head;
        if(!head -> next) {
            //delete head;
            return NULL;
        }
        
        struct ListNode* temp = head;
        int mid = countNodes(head) / 2;
        while(mid-- > 1) {
            head = head -> next;
        }
        head -> next = head -> next -> next;
        return temp;
    }
};