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
void same_or_not(Node *head1,Node *head2);









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

void same_or_not(Node *head1,Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    // cout<<size_(head1)<<endl;
    // cout<<size_(head2)<<endl;

    bool flag = false;
    if(size_(temp1) != size_(temp2))
    {
        cout<<"NO"<<endl;
        return;
    }

    else 
    {
        while(temp1!=NULL)
        {
            if(temp1->val != temp2->val)
            {
                flag = true;
                break;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    // cout<<flag <<endl;
    if(flag == true) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}












/*

10 20 30 40 50 -1
10 20 30 40 50 -1

10 20 30 40 50 -1
10 20 30 40 -1

10 20 30 40 -1
10 20 30 40 50 -1

10 20 30 40 -1
40 30 20 10 -1

1 2 3 4 5 -1
5 4 1 2 6 -1

*/













int main()
{
    Node *head1=NULL;
    Node *tail1=NULL;
    Node *head2=NULL;
    Node *tail2=NULL;

    int v1,v2;
    while(true)
    {
        cin>>v1;
        if(v1==-1)
        {
            break;
        }
        insert_at_tail(head1,tail1,v1);
    }

    while(true)
    {
        cin>>v2;
        if(v2 == -1)
        {
            break;
        }
        insert_at_tail(head2,tail2,v2);
    }

    // print_normal(head1);
    // print_normal(head2); 

    same_or_not(head1,head2);














    return 0;
}