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
    Node *newNode = new Node (val);
    if(head == NULL) 
    {
        head = newNode;
        return; 
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
    while(temp!= NULL)
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
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insertAtTail(head,val); 
    }

    // printList(head); 

    bool flag = true;
    for(Node *i = head; i->next != NULL; i = i->next)
    {
        for(Node *j = i->next; j!=NULL ; j=j->next)
        {
            // cout<<i->val<<" "<<j->val<<endl;
            if(i->val > j->val) flag = false;
        }
        // cout<<endl;
    }

    // cout<<flag <<endl; 
    if(flag == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}