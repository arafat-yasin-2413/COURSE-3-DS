#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return ; 
    }
    tail->next = newNode;
    tail = newNode;
}

int sizeOfList(Node *head)
{
    Node *temp = head;
    int cnt = 0; 
    while(temp!=NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void printList(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    // cout<<"kikorchen?"<<endl;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insertAtTail(head,tail,val);

    }

    for(Node *i  = head;i->next != NULL; i = i->next)
    {
        for(Node *j = i->next; j!=NULL; j = j->next)
        {
            if(i->val<j->val) swap(j->val,i->val);
        }
    }

    int sz =  sizeOfList(head);
    int i =0;
    Node *temp = head;
    while(temp!=NULL)
    {
        if(sz %2 != 0)
        {
            if(i == sz/2)
            {
                cout<<temp->val<<" ";
            }
        }

        else 
        {
            if(i == (sz-1)/2) cout<<temp->val<<" ";
            else if(i == sz/2) cout<<temp->val<<" ";
        }

        i++;
        temp = temp->next;
    }

 



   
    

    return 0;
}


