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

void sort_ascending(Node *head)
{
    for(Node *i = head; i->next!=NULL; i= i->next)
    {
        for(Node *j = i->next;j!=NULL;j=j->next)
        {
            // cout<<i->val<<" "<<j->val<<endl;
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
        // cout<<endl;
    }
    // cout<<endl;
}


/*


*/


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

    sort_ascending(head);
    print_normal(head); 

 









    return 0;
}