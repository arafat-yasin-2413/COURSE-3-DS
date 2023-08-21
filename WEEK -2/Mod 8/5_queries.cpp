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

void print_Linked_List(Node *head);
void insert_head(Node *&head, Node *&tail, int val);
void insert_at_tail(Node *&head, Node *&tail, int val);

void print_Linked_List(Node *head)
{
    cout << endl
         << "Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void insert_head(Node *&head, Node *&tail, int val)
{

    if (head == NULL and tail == NULL)
    {
        Node *newNode = new Node(val);

        newNode->next = head;
        head = newNode;
        tail = newNode;
    }

    else
    {
        Node *newNode = new Node(val);

        newNode->next = head;
        head = newNode;
        
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
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

int main()
{
    /*
5
0 10
0 20
1 30
0 40
1 50
*/

    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {

        int pos, val;
        cin >> pos >> val;

        if (pos == 0)
        {
            insert_head(head, tail, val);
        }

        else if (pos == 1)
        {
            insert_at_tail(head, tail, val);
        }

        // print_Linked_List(head);
        cout << head->val << " " << tail->val << endl;
    }

    return 0;
}