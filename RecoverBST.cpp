// u are given incorrect inorder swap any two nodes so that it becomes correct inorder

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

struct newnode(int data)
{
}

class Solution
{
private:
    Node *first, *prev, *mid, *last;

private:
    void inorder(Node *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        if (prev != NULL && (root->data < prev - < data))
        {
            // first violation
            if (first == NULL)
            {
                first = prev;
                mid == root;
            }
            // secondviolation
            else
            {
                last = root;
            }
        }

        // mark this node as prev
        prev = root;
        inorder(root->right);
    }

public:
    void recoverTree(Node *root)
    {
        first = mid = last = NULL;
        prev = new node(INT_MIN);
        inorder(root);
        if (first && last)
        {
            swap(first->val, last->val);
        }
        else if (first && mid)
        {
            swap(first->val, mid->val);
        }
    }
};