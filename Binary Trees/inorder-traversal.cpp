#include<bits/stdc++.h>

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> sol;

        helper(root, sol);
        return sol;
    }

    void helper(TreeNode* ptr, vector<int>& sol) {
        if(ptr) {
            helper(ptr->left, sol);
            sol.push_back(ptr->val);
            helper(ptr->right, sol);
        }
    }
};