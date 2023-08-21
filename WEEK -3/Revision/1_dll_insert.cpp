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

void print_normal(Node *head)
{
    cout<<"LEFT TO RIGHT : ";
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl; 
}

int list_size(Node *head)
{
    Node *temp = head; 
    int cnt = 0;
    while(temp !=NULL)
    {
        cnt++;
        temp = temp->next;
        
    }
    return cnt;
}

void print_ulta(Node *tail )
{
    cout<<"RIGHT TO LEFT : ";
    Node *temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node (val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return ;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_position(Node *head,int pos,int val)
{
    Node *newNode = new Node (val);

    Node *temp = head;
    for(int i = 1; i<=pos-1;i++)
    {
        temp = temp ->next;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp ->next = newNode;
    newNode->next->prev = newNode;
}

void insert_at_head(Node *&head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return; 
    }

    newNode->next = head; 
    head ->prev = newNode;
    head = newNode;
}

void reverse_two_pointer(Node *head,Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while(i != j and i->next !=j )
    {
        swap(i->val,j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val,j->val);

}


int main()
{
    // cout<<"hello parrot"<<endl;
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

    // int pos,val; cin>>pos>>val;

    // if(pos > list_size(head))
    // {
    //     cout<<"Invalid"<<endl;
    // }

    // else if(pos == 0)
    // {
    //     insert_at_head(head,tail,val);
    // }

    // else if(pos == list_size(head))
    // {
    //     insert_at_tail(head,tail,val);
    // }

    // else 
    // {
    //     insert_at_position(head,pos,val);
    // }

    reverse_two_pointer(head,tail);
    print_normal(head);
    cout<<"head-> val = "<<head->val<<" "<<","
        <<"tail-> val = "<<tail->val<<endl;
    // print_ulta(tail);
    cout<<"Size = "<<list_size(head)<< endl; 

















    return 0;
}