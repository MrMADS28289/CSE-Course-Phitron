#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void duplicate_remove(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *tmp = i;
        while (tmp->next != NULL)
        {
            if (i->val == tmp->next->val)
            {
                Node *deleteNode = tmp->next;
                tmp->next = tmp->next->next;
                delete deleteNode;
            }
            else
            {
                tmp = tmp->next;
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    duplicate_remove(head);
    print_linked_list(head);

    return 0;
}