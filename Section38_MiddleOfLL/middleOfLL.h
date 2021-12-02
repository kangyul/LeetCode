#ifndef MIDDLE_OF_LINKED_LIST_
#define MIDDLE_OF_LINKED_LIST_

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        if(fast!=nullptr) {
            return slow->next;
        }

        return slow;
    }
};

#endif