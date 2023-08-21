#include <bits/stdc++.h>
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


void insert_at_tail(Node *&head, Node *&tail, int val);
void print_Linked_List(Node *head);
void reverse_linked_list(Node *&head,Node *current);






void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_Linked_List(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse_linked_list(Node *&head,Node *current)
{
    if(current ->next ==  NULL)
    {
        head = current;
        return;
    }

    reverse_linked_list(head,current->next);
    current->next->next = current; 
    current->next = NULL; 



}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *newHead = NULL;
    Node *newTail = NULL; 

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_at_tail(head, tail, val);
    }

    Node *temp = head; 
    while(temp!= NULL)
    {
        insert_at_tail(newHead,newTail,temp->val);
        temp = temp->next;
    }

    // print_Linked_List(head);
    // print_Linked_List(newHead);
   
    
    reverse_linked_list(newHead,newHead);
    // print_Linked_List(newHead);

    Node * temp1 = head;
    Node * temp2 = newHead;

    bool flag = false;
    while(temp1 != NULL)
    {
        if(temp1->val != temp2->val)
        {
            flag = true;
            break;      
        }

        temp1 = temp1 ->next;
        temp2 = temp2 ->next;
    }
    if(flag == false ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}