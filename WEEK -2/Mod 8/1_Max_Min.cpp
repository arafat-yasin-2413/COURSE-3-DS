// https://prnt.sc/NccaBmXoEj33
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



void insert_At_Tail(Node *&head,int val)
{
    Node *new_node = new Node (val);
    // corner case: list can be empty(head is at null)
    if(head == NULL)
    {
        head = new_node;
        return;
    }

    Node * temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    } 
    temp->next = new_node;
}


void print_linked_list(Node *head)
{
    cout<<"My Linked List : ";
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    cout<<endl<<endl; 
}

int maximum_of_list(Node *head)
{
    Node *temp = head;

    int mx = INT_MIN;
    while(temp != NULL)
    {
        if(temp->val > mx)
        {
            mx = temp->val;
        }
        temp = temp->next;
    }
    return mx;
}


int minimum_of_list(Node *head)
{
    Node *temp = head;

    int mn = INT_MAX;
    while(temp != NULL)
    {
        if(temp->val < mn)
        {
            mn = temp->val;
        }
        temp = temp->next;
    }
    return mn;
}

int main()
{
    Node *head = NULL;
    int value;
    while (true)
    {
        cin>>value;
        if(value == -1)
        {
            break;
        }

        insert_At_Tail(head,value);
    }
    // print_linked_list(head);

    int mx = maximum_of_list(head);
    int mn = minimum_of_list(head);


 // 2 4 1 5 3 6 -1
 // 2 -1
    

    cout<<mx<<" "<<mn<<endl;

    return 0; 
}