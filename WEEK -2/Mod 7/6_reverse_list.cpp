
// using recursion

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


void print_linked_list(Node *head, Node *tail);
void print_recursively(Node * n);







void print_recursively(Node * n)
{
    if(n==NULL)
    {
        return;
    }
    
    print_recursively(n->next);
    cout<<n->val<<" ";
}

void print_linked_list(Node *head, Node *tail)
{
    cout << "Your Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
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
    // d er next  a emni emni null hoye jabe. constructor kore dibe ei kaj ta.


    print_recursively(head);

    return 0;
}