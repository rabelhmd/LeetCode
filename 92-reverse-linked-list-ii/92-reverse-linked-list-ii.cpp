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
    
    void insert(ListNode** root, int item) {
        ListNode* temp = new ListNode;
        ListNode* ptr;
        temp->val = item;
        temp->next = NULL;
  
        if (*root == NULL)
            *root = temp;
        else {
            ptr = *root;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = temp;
        }
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector <int> v, all;
        int count = 0;
        while(head && count < left-1) {
            all.push_back(head -> val);
            head = head -> next;
            count += 1;
        }
        
        while(head && count < right) {
            //all.push_back(head -> val);
            v.push_back(head->val);
            head = head -> next;
            count += 1;
        }
        
        reverse(v.begin(), v.end());
        for(auto x: v) {
            all.push_back(x);
        }
        
        while(head) {
            all.push_back(head -> val);
            head = head -> next;
            count += 1;
        }
        
        ListNode* temp = NULL;
        for(auto x: all) {
            insert(&temp, x);
        }
        
        return temp;
    }
};