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

    void InOrder(TreeNode* root, vector<int>& ans) {
        if(root == nullptr) return;

        InOrder(root->left, ans);
        ans.push_back(root->val);
        InOrder(root->right, ans);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        InOrder(root, ans);
        for(int i = 0; i < ans.size()-1; i++) {
            if(ans[i] < ans[i+1]) {
                return false;
            }
        }
        return true;
    }
};

#endif