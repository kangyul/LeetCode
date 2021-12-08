#ifndef SOLUTION_
#define SOLUTION_

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {

        if(head == nullptr) return false;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(slow != fast) {
            if(fast == nullptr || fast->next == nullptr) {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }

        return true;
    }

    // solution with hashmap
    bool hasCycleByMap(ListNode *head) {

        map<ListNode*, bool> mp;

        while(head != nullptr) {
            // exists
            if(mp.find(head) != mp.end()) {
                return true;
            }
            mp[head] = false;
            head = head->next;
        }

        return false;

    }


};

#endif