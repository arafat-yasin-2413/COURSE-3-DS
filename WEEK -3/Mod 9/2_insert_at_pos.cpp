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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int size_of_linked_list(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

void print_reversely_recursive(Node * n)
{
    if(n==NULL)
    {
        return;
    }

    print_reversely_recursive(n->next);
    cout<<n->val<<" ";
}

void insert_at_position(Node *&head,int pos,int val)
{
    Node *newNode = new Node (val);

    Node *temp = head;
    for(int i = 1; i<=pos-1;i++)
    {
        temp = temp->next;

    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
}




int main()
{
    Node *head  = new Node (10);
    Node *a  = new Node (20);
    Node *b  = new Node (30);
    Node *c  = new Node (40);
    Node *tail = c;

    head ->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos,val;
    cin>>pos>>val;
    if(pos >= size_of_linked_list(head))
    {
        cout<<"Invalid Index"<<endl;
    }

    else 
    {
        insert_at_position(head,pos,val);
    }


    print_linked_list(head);
    print_reversely_recursive(head);
    cout<<endl;
    cout<<size_of_linked_list(head)<<endl;

    return 0; 
}