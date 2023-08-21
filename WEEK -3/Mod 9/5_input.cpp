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

void print_doubly_normal(Node *head)
{
    // cout<<"Your Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_reversely(Node *tail)
{
    // cout<<"Reversed Linked List : ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (tail == NULL)
    {
        // insert_at_head(head,tail,val);
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }

    print_doubly_normal(head);
    print_reversely(tail);


    return 0;
}