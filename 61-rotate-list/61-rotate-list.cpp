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
    
    void insert(ListNode** head, int item) {
        ListNode* temp = new ListNode;
        temp -> val = item;
        temp -> next = NULL;
        
        if(*head == NULL) {
            *head = temp;
            return;
        }
        
        ListNode* ptr = *head;
        while(ptr->next != NULL) ptr = ptr -> next;
        ptr -> next = temp;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        vector <int> v;
        while(head) {
            v.push_back(head->val);
            head = head -> next;
        }
        
        vector <int> vCopy = v;
        int len = v.size();
        for(int i = 0; i < len; i++) v[(i+k)%len] = vCopy[i];
        
        ListNode* temp = NULL;
        for(auto x: v) insert(&temp, x);
        return temp;
    }
};