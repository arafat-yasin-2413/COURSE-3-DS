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


void insert_At_Tail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    // corner case: list can be empty(head is at null)
    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void print_linked_list(Node *head)
{
    cout << "My Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl
         << endl;
}

int size_of_linked_list(Node *head )
{
    int cnt = 0; 
    Node *temp  = head; 
    while (temp != NULL)
    {
        cnt++;
        temp = temp ->next; 
    }
    return cnt; 
}



void get_me_mid(Node *head)
{
    Node *temp = head; 
    int sz = size_of_linked_list(head);
    int i = 0; 

    while(temp != NULL)
    {
        if(sz % 2 == 0)
        {
            if(i == (sz/2)-1 or i == sz/2 )
            {
                cout<<temp->val<<" ";
            }
        }

        else if(sz %2 != 0)
        {
            if(i == sz/2)
            {
                cout<<temp->val;
            }
        }

        i++;
        temp = temp->next;

    }
    
}

int main()
{
    Node *head = NULL;
    int val;

    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }

        insert_At_Tail(head,val);
    }


    for(Node *i = head; i->next != NULL; i= i->next)
    {
        for(Node *j = i->next; j!= NULL;j=j->next)
        {
            // cout<<i->val<<" "<<j->val<<endl; 
            if(i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }

    // print_linked_list(head);
    get_me_mid(head);
    

    

    return 0; 
}