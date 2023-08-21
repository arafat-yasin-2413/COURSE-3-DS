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

void delete_from_List(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    Node * delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}


void delete_from_head(Node *&head)
{
    Node *delNode = head;
    head =head->next;
    // head = delNode->next;
    delete delNode;
}

void print_Linked_List(Node *head)
{
    cout << endl
         << "Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}



int size_of_list(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}



int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head ->next = a;
    a->next = b;
    b->next = c;
    c->next = d;


    print_Linked_List(head);

    int pos ;
    cin>>pos; 

    if(pos >= size_of_list(head))
    {
        cout<<"Invalid Index"<<endl;
    }

    else if(pos == 0)
    {
        delete_from_head(head);
    }

    else 
    {
        delete_from_List(head,pos);
    }

    

    print_Linked_List(head);



    return 0;
}