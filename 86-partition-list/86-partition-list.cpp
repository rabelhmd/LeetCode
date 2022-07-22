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
    
    ListNode* partition(ListNode* head, int x) {
        vector <int> less, gt;
        while(head) {
            if(head->val < x) less.push_back(head-> val);
            else gt.push_back(head-> val);
            head = head -> next;
        }
        
        ListNode* temp = NULL;
        for(auto x: less) {
            insert(&temp, x);
        }
        
        for(auto x: gt) {
            insert(&temp, x);
        }
        return temp;
    }
};