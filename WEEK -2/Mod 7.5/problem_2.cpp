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


void insert_At_Tail(Node *&head,Node *&tail,int val);
void print_linked_list(Node *head,Node *tail);
void print_list_reverse(Node *n);








void insert_At_Tail(Node *&head,Node *&tail,int val)
{
    Node *new_node = new Node(val);

    if(head == NULL)
    {
        head = new_node;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL)
    {
        temp =temp->next;
    }
    temp->next = new_node;
    new_node->next = NULL;
}

void print_linked_list(Node *head,Node *tail)
{

    cout<<endl<<"Your Linked List : ";
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;


}

void print_list_reverse(Node *n)
{
   
    if(n == NULL)
    {
        return ;
    }
    
    print_list_reverse(n->next);
    cout<<n->val<<" ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while(true)
    {
        cin>>val;

        if(val == -1)
        {
            break;
        }

        insert_At_Tail(head,tail,val);

    }
        print_linked_list(head,tail);
        cout<<"List in Reverse order: ";
        print_list_reverse(head);
        cout<<endl<<endl;

    return 0; 
}