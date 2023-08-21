#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


void insert_at_tail(Node *&head,Node *&tail,int val);
void print_normal(Node *head);
int size_(Node *head);










void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node (val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_normal(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp =temp->next;
    }
    cout<<endl;
}

int size_(Node *head)
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

void reverse_list(Node *head,Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while (i!=j and i->next!=j)
    {
        swap(i->val,j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val,j->val);
    
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
   

    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    reverse_list(head,tail);
    print_normal(head);
    // cout<<"head = "<<head->val<<endl;
    // cout<<"tail = "<<tail->val<<endl;

  















    return 0;
}