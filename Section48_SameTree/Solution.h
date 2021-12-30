#ifndef SOLUTION_
#define SOLUTION_

#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* a, TreeNode* b) {
        if(a == nullptr && b == nullptr) return true;
        else if(a == nullptr && b != nullptr) return false;
        else if(a != nullptr && b == nullptr) return false;

        if(a->val == b->val && isSameTree(a->left, b->right) && isSameTree(a->right, b->right)) {
            return true;
        }
        return false;
    }

};

#endif