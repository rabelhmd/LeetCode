/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> Mp;
        Node* ptr = head;
        while (ptr) {
            Mp[ptr] = new Node(ptr->val);
            ptr = ptr->next;
        }
        ptr = head;
        while (ptr) {
            Mp[ptr]->next = Mp[ptr->next];
            Mp[ptr]->random = Mp[ptr->random];
            ptr = ptr->next;
        }
        return Mp[head];
    }
};
