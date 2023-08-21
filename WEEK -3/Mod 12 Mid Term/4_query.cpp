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

////////////// INITIALIZING FUNCTIONS ////////////////
void insert_at_tail(Node *&head, Node *&tail, int val);
void insert_at_head(Node *&head, Node *&tail, int val);
void insert_at_pos(Node *&head, int pos, int val);
void print_normal(Node *head);
int size_list(Node *head);
void reverse_list(Node *n);
////////////// INITIALIZED FUNCTIONS ////////////////

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
    tail = tail->next;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = head->prev;
}

void insert_at_pos(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
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

int size_list(Node *head)
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

void reverse_list(Node *n)
{

    if (n == NULL)
    {
        return;
    }

    reverse_list(n->next);
    cout << n->val << " ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++)
    {

        int pos, val;
        cin >> pos >> val;

        if (pos > size_list(head))
        {
            cout << "Invalid" << endl;
        }

        else if (pos == 0)
        {
            insert_at_head(head, tail, val);
            cout << "L -> ";
            print_normal(head);
            cout << "R -> ";
            reverse_list(head);
            cout << endl;
        }

        else if (pos == size_list(head))
        {
            insert_at_tail(head, tail, val);
            cout << "L -> ";
            print_normal(head);
            cout << "R -> ";
            reverse_list(head);
            cout << endl;
        }

        else
        {
            insert_at_pos(head, pos, val);
            cout << "L -> ";
            print_normal(head);
            cout << "R -> ";
            reverse_list(head);
            cout << endl;
        }
       
    }

    // Node *head = new Node (30);
    // Node *a = new Node (40);
    // Node *b = new Node (10);
    // Node *c = new Node (20);
    // Node *tail = c;

    // head->next = a;
    // a->next = b;
    // b->next = c;
    // a->prev = head;
    // b->prev = a;
    // c->prev = b;

    return 0;
}