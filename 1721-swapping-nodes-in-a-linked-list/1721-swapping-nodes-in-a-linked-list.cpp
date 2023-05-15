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
    int f(ListNode* head) {
        int ret = 0;
        while(head) {
            head = head -> next;
            ret += 1;
        }
        return ret;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        int len = f(head) ;
        ListNode* a = head;
        int aRange = k-1, bRange = len-k;
        while(aRange-- > 0) a = a -> next;
        ListNode* b = head;
        while(bRange-- > 0) b = b -> next;
        swap(a->val, b->val);
        return head;
    }
};