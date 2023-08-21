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

void print_doubly_normal(Node * head)
{
    cout<<"Your Linked List : ";
    Node *temp  = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }



    cout<<endl; 
}


void print_reversely(Node * tail)
{
    cout<<"Reversed Linked List : ";
    Node *temp = tail;
    while(temp !=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;

    }
    cout<<endl;

}




int main()
{
    Node *head = new Node (10);
    Node *a = new Node (20);
    Node *b = new Node (30);
    Node *tail = b;

    

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    print_doubly_normal(head);
    print_reversely(tail);



    

    return 0; 
}