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
    Node *tmp = head;
    vector<int> num;
    vector<int> uniqe_vector;
    while (tmp != NULL)
    {
        num.push_back(tmp->val);
        tmp = tmp->next;
    }

    for (int i = 0; i < num.size(); i++)
    {
        bool isUniqe = true;
        for (int j = 0; j < uniqe_vector.size(); j++)
        {
            if (uniqe_vector[j] == num[i])
                isUniqe = false;
        }
        if (isUniqe)
            uniqe_vector.push_back(num[i]);
    }

    for (auto n : uniqe_vector)
    {
        cout << n << " ";
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

    return 0;
}