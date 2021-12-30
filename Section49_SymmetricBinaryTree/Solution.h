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
    bool helper(TreeNode* leftTree, TreeNode* rightTree) {
        if(leftTree == nullptr && rightTree != nullptr) return false;
        if(leftTree != nullptr && rightTree == nullptr) return false;
        if(leftTree == nullptr && rightTree == nullptr) return true;
        if(leftTree->val != rightTree->val) return true;

        return helper(leftTree->left, rightTree->right) && helper(leftTree->right, rightTree->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return helper(root->left, root->right);
    }

};

#endif