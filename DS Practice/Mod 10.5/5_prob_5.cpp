#include <bits/stdc++.h>
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

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
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
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}



int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, tail, val);
    }

    for(Node *i = head; i->next !=NULL; i = i->next)
    {
        for(Node *j = i->next; j!=NULL; j = j->next)
        {
            // cout<<i->val<<" "<<j->val<<endl;
            if(i->val >= j->val)
            {
                swap(i->val,j->val);
            }
        }
        // cout<<endl;
    }
    
    printList(head);

    return 0;
}