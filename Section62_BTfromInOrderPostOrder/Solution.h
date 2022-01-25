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
    TreeNode* buildTreeHelper(vector<int> inorder, vector<int> postorder, int inS, int inE, int postS, int postE) {
        if(inS > inE) return nullptr;
        int rootData = postorder[postE];
        int rootIndex = -1;
        for(int i = inS; i <= inE; i++) {
            if(inorder[i] == rootData) {
                rootIndex = i;
                break;
            }
        }

        int inLS = inS;
        int inLE = rootIndex -1;
        int postLS = postS;
        int postLE = postLS + inLE - inLS;

        int inRS = rootIndex + 1;
        int inRE = inE;
        int postRS = postLE + 1;
        int postRE = postE - 1;

        TreeNode* root = new TreeNode(rootData);
        root->left = buildTreeHelper(inorder, postorder, inLS, inLE, postLS, postLE);
        root->right = buildTreeHelper(inorder, postorder, inRS, inRE, postRS, postRE);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        buildTreeHelper(inorder, postorder, 0, n-1, 0, n-1);
    }
};

#endif