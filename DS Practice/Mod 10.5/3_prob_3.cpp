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


void insertAtTail(Node *&head,Node*&tail,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return; 
    }

    tail->next = newNode;
    newNode->prev = tail; 
    tail = newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" "; 
        temp = temp->next;
    }
    cout<<endl; 
}

void isPalindrome(Node * head,Node *tail)
{
    Node * i = head;
    Node * j = tail;

    bool flag = false;
    while(i!=j and i->next!=j)
    {
        if(i->val != j->val)
        {
            flag = true;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->val != j->val)
    {
        flag = true;
    }

    if(flag == true) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}

int main()
{
    Node *head = NULL ;
    Node *tail = NULL ; 

    int val;
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insertAtTail(head,tail,val);
    }

    // printList(head);

    isPalindrome(head,tail);
    // printList(head);

    return 0;
}