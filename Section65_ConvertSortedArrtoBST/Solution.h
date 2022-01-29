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
    TreeNode* helper(vector<int>& nums, int s, int e) {
        if(s > e) {
            return nullptr;
        }

        int rootIndex = (s+e)/2;
        int rootNum = nums[rootIndex];
        TreeNode* root = new TreeNode(rootNum);

        root->left = helper(nums, s, rootIndex + 1);
        root->right = helper(nums, rootIndex + 1, e);
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {

    }
};

#endif