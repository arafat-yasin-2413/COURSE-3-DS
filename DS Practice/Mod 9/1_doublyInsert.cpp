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

void printListUlta(Node *tail )
{
    Node *temp = tail;
    while(temp!= NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
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

void insertAtPosition(Node *head,int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp  = head; 
    for(int i = 1; i<=pos-1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    newNode->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;

}

void insertAtHead(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node (val);
    if(head == NULL)
    {
        // insertAtTail(head,tail,val);
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL; 

    // int val;
    // while(true)
    // {
    //     cin>>val;
    //     if(val == -1) break;
    //     insertAtTail(head,tail,val);
    // }


    int pos,v;
    cin>>pos>>v;
    if(pos > sizeOfList(head)) cout<<"Invalid"<<endl;
    else if(pos == 0) insertAtHead(head,tail,v);
    else if(pos == sizeOfList(head)) insertAtTail(head,tail,v);
    else insertAtPosition(head,pos,v);

    

    printList(head);
    // printListUlta(tail); 
    
    
    

    return 0;
}