#ifndef SOLUTION_
#define SOLUTION_

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* one = head;
        ListNode* two = head;

        while(n--) two = two->next;

        if(two == nullptr) {
            return one->next;
        }

        while(two->next != nullptr) {
            two = two->next;
            one = one->next;
        }

        one->next = one->next->next;

        return head;
        
    }
};

#endif