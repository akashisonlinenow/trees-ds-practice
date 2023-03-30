#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

class BSTIterator
{
private:
    stack<Node *> st;

public:
    BSTIterator(Node *root)
    {
        pushAll(root);
    }

    bool hasNext()
    {
        return !myStack.empty();
    }

    int next()
    {
        Node *temp = myStack.top();
        myStack.pop();
        pushAll(temp->right);
        return temp->data;
    }

private:
    void pushAll(Node *node)
    {
        for (; node != NULL; myStack.push(node), node = node->left)
    }
};
