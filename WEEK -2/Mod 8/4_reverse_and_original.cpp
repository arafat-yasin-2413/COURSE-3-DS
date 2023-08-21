#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    long long int val;
    Node * next;

    Node (long long int val)
    {
        this->val = val;
        this->next = NULL;
    }

};

void insert_At_Tail(Node *&head,Node *&tail, long long int val)
{
    Node *new_node = new Node(val);
    // corner case: list can be empty(head is at null)
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
}

void print_linked_list(Node *head)
{
   
    Node *temp = head;
    
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

  
}

void reverse_linked_list(Node *n)
{
    if(n == NULL)
    {
        return;
    }
    reverse_linked_list(n->next);
    cout<<n->val<<" ";
}

int main()
{
    Node *head = NULL; 
    Node *tail = NULL;
    long long int val ;

    while (true)
    {
        cin>>val; 
        if(val == -1)
        {
            break;
        }
        insert_At_Tail(head,tail, val );

    }

    reverse_linked_list(head);
    cout<<endl;
    print_linked_list(head);
    



    

    return 0; 
}