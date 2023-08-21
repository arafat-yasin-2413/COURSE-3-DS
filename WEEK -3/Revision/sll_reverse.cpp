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

void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node(val);

    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return; 
    }
    tail->next = newNode;
    tail = newNode;
}

void print_normal(Node *head)
{
    cout<<"LEFT TO RIGHT : "; 
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;

    }
    cout<<endl; 
}

int size_list(Node *head)
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

void reverse_singly(Node *&head,Node *cur)
{
     
    if(cur->next == NULL)
    {
        head = cur;
        return; 
    }

    reverse_singly(head,cur->next);
    cur->next->next = cur;
    cur->next = NULL;
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while(true)
    {
        cin>>value;
        if(value == -1)
        {
            break;
        }

        insert_at_tail(head,tail,value);
    }

    reverse_singly(head,head); 
    print_normal(head); 
    cout<<"SIZE : "<<size_list(head)<<endl; 
    

    return 0;
}