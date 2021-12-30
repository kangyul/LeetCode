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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        if(root == nullptr) return v;

        vector<int> temp;

        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);

        while(!q.empty()) {
            TreeNode* f = q.front();
            q.pop();
            if(f == nullptr) {
                v.push_back(temp);
                temp.clear();
                if(!q.empty()) {
                    q.push(nullptr);
                }
            } else {
                temp.push_back(f->val);
                if(f->left) {
                    q.push(f->left);
                }
                if(f->right) {
                    q.push(f->right);
                }
            }
        }

        reverse(v.begin(), v.end());
        return v;
    }
};

#endif