
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long int  val;
    Node *next;

    Node(long long int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head,Node *&tail,long long int val)
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


void printRev(Node *head)
{
    Node *temp = head;
    if(temp == NULL) return ;
    printRev(temp->next);
    cout<<temp->val<<" ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL; 
    long  long int  val; 
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insertAtTail(head,tail,val);
    } 

    printRev(head); cout<<endl;
    printList(head);

   
    return 0;
}