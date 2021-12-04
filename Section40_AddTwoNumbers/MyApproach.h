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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        
        if(l1->val == 0 && l2->val == 0 && l1->next == nullptr && l2->next == nullptr) return l1;
        
        long long num = 0;
        
        int power = 0;
        
        long long val = 0;
        
        ListNode* temp = l1;
        
        while(temp != nullptr) {
            num += temp->val * (pow(10, power));
            power++;
            temp = temp->next;
        }
        
        power = 0;
        
        temp = l2;
        
        while(temp != nullptr) {
            num += temp->val * (pow(10, power));
            power++;
            temp = temp->next;
        }
        
        delete temp;
        
        // num is a sum of two linked list numbers
        
        ListNode* head = nullptr;
        
        while(num) {
            int value = num % 10;
            num /= 10;
            ListNode* insert_node = new ListNode();
            insert_node->val = value;
            insert_node->next = head;
            head = insert_node;
        } 
        
        // Reverse the LinkedList
        
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