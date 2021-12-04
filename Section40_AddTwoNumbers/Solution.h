#ifndef SOLUTION_
#define SOLUTION_

#include <bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* A, ListNode* B) {
        
        if(A == nullptr) return B;
        if(B == nullptr) return A;
        int carry = 0;
        
        ListNode *head = nullptr;
        
        while(A != nullptr && B != nullptr) {
            int sum = A->val + B->val + carry;
            ListNode *n = new ListNode(sum%10);
            n->next = head;
            head = n;
            carry = sum/10;
            
            A = A->next;
            B = B->next;
        }
        
        while(A != nullptr) {
            int sum = A->val + carry;
            ListNode *n = new ListNode(sum%10);
            n->next = head;
            head = n;
            carry = sum/10;
            
            A = A->next;
        }
        
        while(B != nullptr) {
            int sum = B->val + carry;
            ListNode *n = new ListNode(sum%10);
            n->next = head;
            head = n;
            carry = sum/10;
            
            B = B->next;
        }
        
        if(carry > 0) {
            ListNode* n = new ListNode(carry);
            n->next = head;
            head = n;
        }
        
        // reverse the LinkedList
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        
        while(curr != nullptr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        return prev;
        
    }
};

#endif