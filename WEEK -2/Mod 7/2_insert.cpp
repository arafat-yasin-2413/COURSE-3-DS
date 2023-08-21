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

void insert_at_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    // cout<<temp->val<<endl;
    newNode->next = temp->next;
    temp->next = newNode;
}


void insert_head(Node *&head,int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

int size_of_list(Node *head)
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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    int pos, val;
    cin >> pos >> val;

    print_Linked_List(head);
    if (pos > size_of_list(head))
    {
        cout << "Invalid Index" << endl;
    }

    else if(pos == 0)
    {
        insert_head(head,val);
    }
    else
    {
        insert_at_position(head,pos,val);
    }

    print_Linked_List(head);

    return 0;
}