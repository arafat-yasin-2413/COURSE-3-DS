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

int main()
{
    Node *head1 = NULL;
    int val1; 
    while(true)
    {
        cin>>val1;
        if(val1 == -1) break;
        insertAtTail(head1,val1);
    } 

    Node *head2 = NULL;
    int val2; 
    while(true)
    {
        cin>>val2; 
        if(val2 == -1) break;
        insertAtTail(head2,val2); 
    }
    

    int sz1 = sizeOfList(head1);
    int sz2 = sizeOfList(head2);
    
    if(sz1 != sz2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}