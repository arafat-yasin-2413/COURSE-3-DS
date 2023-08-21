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

void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node (val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail ->next = newNode;
    tail = newNode;
}

void print_Linked_List(Node *head)
{
    cout << endl
         << "Linked List : ";
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
    Node *head = NULL;
    Node *tail = NULL; 

    int val; 
    while(true)
    {
        cin>>val;
        if(val == -1)
            break;

        insert_at_tail(head,tail,val);
        
    }

 // selection sort
    for(Node * i = head;i->next!=NULL; i = i->next)
    {
        for(Node * j = i->next; j !=NULL; j = j->next)
        {
            if(i->val > j->val)
            {
                // cout<<i->val<<" "<<j->val<<endl;
                swap(i->val,j->val);
            }
        }
    }


    print_Linked_List(head);
    

    return 0; 
}