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

void print_normal(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" "; 
        temp = temp->next; 
    }
    cout<<endl;
}


void cycle_detection(Node *head)
{
    Node *slow = head;
    Node *fast = head; 

    bool flag = false;
    while(fast != NULL and fast ->next != NULL)
    // while(fast->next !=NULL and fast != NULL)
    {
        slow = slow->next;
        fast = fast ->next ->next;

        if(slow == fast)
        {
            flag = true;
            break;
        }

    }

    if(flag == false) cout<<"No Cycle"<<endl;
    else cout<<"Cycle Detected"<<endl ; 

}


int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node (30);
    Node *c = new Node (40); 
    Node *d = new Node(50);


    head->next = a; 
    a->next = b;
    b->next = c; 
    c->next = d;


    // c->next = b; 

    cycle_detection(head);
    // print_normal(head); 
    

    return 0;
}