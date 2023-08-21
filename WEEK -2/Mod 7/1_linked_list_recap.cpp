#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * next;

    Node (int val)
    {
        this->val = val;
        this->next = NULL;
    }

};  

void print_Linked_List(Node *head)
{
    cout<<endl<<"Linked List : ";
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;
}

int main()
{
    Node *head = new Node (10);
    Node *a = new Node (20);
    Node *b = new Node (30);
    Node *c = new Node (40);
    Node *d = new Node (50);
    
    head->next = a;
    a->next = b;
    b->next =c;
    c->next = d;


    print_Linked_List(head);


    return 0; 
}