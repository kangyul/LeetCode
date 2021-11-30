#ifndef INTERSECTION_OF_TWO_LISTS_
#define INTERSECTION_OF_TWO_LISTS_

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        // finding length of two Linked Lists
        int m = 0;
        int n = 0;
        
        ListNode *ptrA = headA;
        while(ptrA != nullptr) {
            m++;
            ptrA = ptrA->next;
        }
        
        ListNode *ptrB = headB;
        while(ptrB != nullptr) {
            n++;
            ptrB = ptrB->next;
        }
        
        // moving one of two Lists head
        if(m > n) {
            for(int i = 0; i < (m-n); i++) {
                headA = headA->next;
            }
        } else {
            for(int i = 0; i < (n-m); i++) {
                headB = headB->next;
            }
        }
        
        // finding the intersection
        while(headA != nullptr) {
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        
        return nullptr;
    }
};

#endif