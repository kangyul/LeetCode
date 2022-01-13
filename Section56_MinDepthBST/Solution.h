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
    struct qItem {
        TreeNode* node;
        int depth;
    };

    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;

        queue<qItem> q;
        qItem q1 = {root, 1};
        q.push(q1);

        while(!q.empty()) {
            qItem f = q.front();
            q.pop();

            TreeNode* node = f.node;
            int depth = f.depth;

            if(node->left == nullptr && node->right == nullptr) return depth;

            if(node->left) {
                q.push({node->left, depth+1});
            }

            if(node->right) {
                q.push({node->right, depth+1});
            }
        }

        return 0;
    }
};

#endif