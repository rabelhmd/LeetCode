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
        while (head) {
            head = head -> next;
            ret += 1;
        }
        return ret;
    }
    
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = f(head);
        int p = len / k, left = len % k;
        ListNode *ptr = head, *prev = NULL;
        
        vector<ListNode*> res(k);
        for (int i = 0; i < k; i++) {
            res[i] = head;
            for (int j = 0; j < p + (i < left); j++) {
                prev = head; 
                head = head->next; 
            }
            if (prev) prev->next = NULL;
        }
        
        return res;
    }
};