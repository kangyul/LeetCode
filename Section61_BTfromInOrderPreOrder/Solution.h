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
    TreeNode* buildTreeHelper(vector<int> preorder, vector<int> inorder, int inS, int inE, int preS, int preE) {
        if(inS > inE) return nullptr;
        int rootData = preorder[preS];
        int rootIndex = -1;
        for(int i = inS; i <= inE; i++) {
            if(inorder[i] == rootData) {
                rootIndex = i;
                break;
            }
        }

        int inLeftS = inS;
        int inLeftE = rootIndex - 1;
        int preLeftS = preS + 1;
        int preLeftE = preLeftS + inLeftE - inLeftS;

        int inRightS = rootIndex + 1;
        int inRightE = inE;
        int preRightS = preLeftE + 1;
        int preRightE = preE;

        TreeNode* root = new TreeNode(rootData);
        root->left = buildTreeHelper(preorder, inorder, inLeftS, inLeftE, preLeftE, preLeftS);
        root->right = buildTreeHelper(preorder, inorder, inRightS, inRightE, preRightS, preRightE);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        return buildTreeHelper(preorder, inorder, 0, n-1, 0, n-1);
    }
};

#endif