#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    TreeNode *left, *right;
    int val;
};

class Solution
{
public:
    void recursion(TreeNode *root, int level, vector<int> &res)
    {
        if (root == NULL)
            return;
        if (res.size() == level)
            res.push_back(root->val);
        recursion(root->left, level + 1, res);
        recursion(root->right, level + 1, res);
    }

    vector<int> leftSideView(TreeNode *root)
    {
        vector<int> res;
        recursion(root, 0, res);
        return res;
    }
};