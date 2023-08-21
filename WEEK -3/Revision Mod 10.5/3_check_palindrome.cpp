#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val);
void print_normal(Node *head);
int size_(Node *head);

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size_(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void check_palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    bool flag = false;
    while (i != j and i->next != j)
    {
        if (i->val != j->val)
        {
            flag = true;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if (i->val != j->val)
    {
        flag = true;
    }

    if (flag == true)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    check_palindrome(head, tail);

    return 0;
}