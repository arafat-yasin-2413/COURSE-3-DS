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


void insertAtTail(Node *&head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail =newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int sizeOfList(Node *head)
{
    Node *temp = head; 
    int cnt = 0 ;
    while(temp!=NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt; 
}

void deleteAtPosition(Node *head,int pos)
{
    Node *temp = head;
    for(int i = 1; i<= pos-1; i++)
    {
        temp = temp->next;
        // cout<<"loop a dhuksi"<<endl;
    }
    Node *delNode = temp->next;
    temp->next = delNode->next;
    delNode->next->prev = temp;
    delete delNode;
}

void deleteAtHead(Node *&head,Node *&tail)
{
    // if(head->next == NULL)
    // {
    //     head = NULL; 
    //     tail = NULL;
    //     return; 
    // } 
    // এভাবেও করা যায়। 
    Node *delNode = head;
    head = delNode->next;
    delete delNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    // আবার, এভাবেও করা যায়

    head->prev = NULL;
    
}

void deleteAtTail(Node *&head,Node *&tail,int pos)
{
    // if(head ->next == NULL)
    // {
    //     head = NULL; 
    //     tail = NULL; 
    //     return ; 
    // }
    

    Node *delNode = tail;
    tail = delNode->prev;
    delete delNode;
    if(tail == NULL)
    {
        head = NULL; 
        return; 
    }
    tail->next = NULL;

    
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL; 

    int val;
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insertAtTail(head,tail,val);
    }

    int pos;
    cin>>pos;

    if(pos >= sizeOfList(head))
    {
        cout<<"Invalid" <<endl;
    }
    else if(pos == 0)
    {
        deleteAtHead(head,tail);
    }

    else if(pos == (sizeOfList(head)) -1) 
    {
        deleteAtTail(head,tail,pos);
    }
    
    else 
    {
        deleteAtPosition(head,pos);
    }

    printList(head);



    

    return 0;
}