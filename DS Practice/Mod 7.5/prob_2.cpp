
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

void insertAtTail(Node *&head,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return ;
    }

    Node *temp = head; 
    while(temp->next != NULL)
    {
        temp = temp->next;  
    }

    temp->next = newNode;
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
    while(temp!= NULL)
    {
        cnt++;
        temp = temp ->next;
    }

    return cnt;
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
    int val; 
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insertAtTail(head,val);
    } 

    printRev(head); 

   
    return 0;
}