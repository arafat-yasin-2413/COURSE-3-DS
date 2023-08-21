
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



int main()
{
    Node *head = NULL;
    int val; 
    int mx = INT_MIN;
    int mn = INT_MAX;
    while(true)
    {
        cin>>val;
        
        if(val == -1) break;
        if(val > mx) mx = val;
        if(val < mn) mn = val;
        insertAtTail(head,val);
    } 

    cout<<mx <<" "<< mn <<endl;


   
    return 0;
}