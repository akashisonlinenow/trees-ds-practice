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

    BSTIterator2(Node *root)
    { // made by me for before()
        pushAllforbefore(root);
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

    int before()
    { // this was made by me
        Node *temp = myStack.top();
        myStack.pop();
        pushAllforbefore(temp->before);
        return temp->data;
    }

private:
    void pushAll(Node *node)
    {
        for (; node != NULL; myStack.push(node), node = node->left)
    }

    void pushAllforbefore(Node *node)
    { // pushAll for before() made by me
        for (; node != NULL; myStack.push(node), node = node->right)
            ;
    }
};
