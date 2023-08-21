#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * next;
    Node * prev;

    Node (int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};


void print_list(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverse_doubly_LL(Node *head,Node *tail)
{
    Node *i =head;
    Node *j = tail;

    while(i!=j and i->next != j)
    {
        swap(i->val,j->val);

        i = i->next;
        j = j->prev;
    }

    swap(i->val,j->val);


}

int main()
{
    Node *head = new Node (10);
    Node *a = new Node (20);
    Node *b = new Node (30);
    Node *c = new Node (40);
    // Node *d = new Node (50);
    // Node *e = new Node (60);


    head ->next = a;
    a->next = b;
    b->next = c;
    // c->next = d;
    // d->next = e;
    a->prev = head;
    b->prev = a;
    c->prev = b;
    // d->prev = c;
    // e->prev = d;
    
    
    Node *tail = c;
    print_list(head);
    reverse_doubly_LL(head,tail);
    print_list(head);


    return 0; 
}