#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *Left;
        Node *Right;
        if (l == -1)
            Left = NULL;
        else
            Left = new Node(l);
        if (r == -1)
            Right = NULL;
        else
            Right = new Node(r);

        p->left = Left;
        p->right = Right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void print_outer_tree(Node *root, int x)
{
    if (root == NULL)
    {
        return;
    }

    if (x)
    {
        if (root->left)
            print_outer_tree(root->left, x);
        else
            print_outer_tree(root->right, x);
        cout << root->val << " ";
    }
    else
    {
        cout << root->val << " ";
        if (root->right)
            print_outer_tree(root->right, x);
        else
            print_outer_tree(root->left, x);
    }
}

int main()
{
    Node *root = input_tree();
    if (!root->left && !root->right)
        cout << root->val;
    if (root->left && root->right)
    {
        print_outer_tree(root->left, 1);
        cout << root->val << " ";
        print_outer_tree(root->right, 0);
    }
    else if (root->left && !root->right)
        print_outer_tree(root, 1);
    else if (root->right && !root->left)
        print_outer_tree(root, 0);

    return 0;
}