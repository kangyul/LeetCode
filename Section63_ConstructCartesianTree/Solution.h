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
    TreeNode* buildTreeHelper(vector<int> &inorder, int s, int e) {
        if(s > e) {
            return nullptr;
        }

        int maxVal = INT_MIN;
        int maxIndex = -1;

        for(int i = s; i < e; i++) {
            if(inorder[i] > maxVal) {
                maxVal = inorder[i];
                maxIndex = i;
            }
        }

        TreeNode* root = new TreeNode(maxVal);
        root->left = buildTreeHelper(inorder, s, maxIndex - 1);
        root->right = buildTreeHelper(inorder, maxIndex + 1, e);
        return root;
    }

    TreeNode* buildTree(vector<int> &inorder) {
        if(inorder.size() == 0) {
            return nullptr;
        }
        return buildTreeHelper(inorder, 0, inorder.size() - 1);
    }
};

#endif