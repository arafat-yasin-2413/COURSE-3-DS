#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node *next ;

    Node (int val)
    {
        this->val = val;
        this->next = NULL;
    }
};


void print_Reversely(Node *n)
{
    if(n == NULL)
    {
        return;
    }

    print_Reversely(n->next);
    cout<<n->val<<" ";


    
}


void print_list(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}


void reverse_linked_list(Node *&head,Node *current)
{
    if(current ->next ==  NULL)
    {
        head = current;
        return;
    }

    reverse_linked_list(head,current->next);
    current->next->next = current; // 30 er next a 20 dicchi
    current->next = NULL; 



}



int main()
{
    Node *head = new Node (10);
    Node *a = new Node (20);
    Node *b = new Node (30);

    head->next = a;
    a->next = b;

    print_list(head);
    cout<<endl;
    
    reverse_linked_list(head,head); 
    
    print_list(head);
    cout<<endl;
    cout<<head->val<<endl;



    return 0; 
}