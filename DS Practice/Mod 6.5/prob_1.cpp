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

    cout<<sizeOfList(head)<<endl;

    return 0;
}