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
    ListNode* partition(ListNode* A, int x) {

        if(A == nullptr) return A;
        
        ListNode *LH = nullptr, *LT = nullptr, *MH = nullptr, *MT = nullptr;

        while(A != nullptr) {
            if(A->val < x) {
                if(LH == nullptr) {
                    LH = LT = A;
                } else {
                    LT->next = A;
                    LT = A;
                }
            } else {
                if(MH == nullptr) {
                    MH = LH = A;
                } else {
                    MT->next = A;
                    MT = A;
                }
            }
            A = A->next; 
        }

        if(LH == nullptr && MH != nullptr) {
            MT->next == nullptr;
            return MH;
        } else if(LH != nullptr && MH == nullptr) {
            LT->next = nullptr;
            return LH;
        } else {
            MT->next = nullptr;
            LT->next = MH;
            return LH;
        }

    }
};

#endif