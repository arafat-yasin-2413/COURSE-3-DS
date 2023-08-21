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

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        cout << "Inserted At Head" << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << "Inserted At Tail " << endl;
}

void printList(Node *head)
{
    cout << "Your Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node *head,int pos,int val)
{
    Node *newNode = new Node (val);
    Node *temp = head;
    for(int i = 1;i<=pos-1; i++)
    {
        temp = temp->next;
        if(temp == NULL) 
        {
            cout<<"Invalid Index" <<endl;
            return; 
        }
    }

    
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtHead(Node *&head,int val)
{
    Node *newNode = new Node (val);
    newNode->next = head;
    head = newNode;
    cout<<"Inserted At Head (head function)"<<endl<<endl;
}

void deleteFromPosition(Node *&head, int pos)
{
    Node *temp = head;
    for(int i = 1; i<= pos-1; i++)
    {
        temp = temp ->next;
        if(temp == NULL) 
        {
            cout<<"Invalid Index" <<endl;
            return ; 
        }
    }
    if(temp->next == NULL) 
    {
        cout<<"Invalid Index outside" <<endl;
        return; 
    }
    Node *delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;

    cout<<"Deleted From Position "<<endl<<endl;
}

void deleteAtHead(Node *&head)
{
    if(head == NULL)
    {
        cout<<"Insert Some Node first" <<endl;
        return;
    }
    
    Node *delNode = head;
    head = delNode->next;
    delete delNode;

    cout<<"Deleted From Head"<<endl;
}

int main()
{
    Node *head = NULL;
    cout << "Option 1 : Insert At Tail " << endl
         << "Option 2 : Print Linked List " << endl
         << "Option 3 : Insert At Position " << endl
         << "Option 4 : Insert At Head " <<endl
         << "Option 5 : Delete From Position " <<endl
         << "Option 6 : Delete At Head " <<endl
         << "Option 7 : Terminate " << endl;

    while (true)
    {

        int op;
        cout <<endl<< "Your Choice : ";
        cin >> op;
        cout<<endl;

        if (op == 1)
        {
            cout << "Enter value : ";
            int val; 
            cin >> val;
            insertAtTail(head, val);
        }

        else if (op == 2)
        {
            printList(head);
        }

        else if(op == 3)
        {
            int pos,val;
            cout<<"Enter position : "<<endl;
            cin>>pos;
            cout<<"Enter value : "<<endl;
            cin>>val;

            if(pos  == 0)
            {
                insertAtHead(head,val);
            }
            else
            {
                insertAtPosition(head,pos,val);
            }
            
        }

        else if(op == 4)
        {
            int val;
            cout<<"Enter value : "<<endl;
            cin>>val;
            insertAtHead(head,val);
        }

        else if(op == 5)
        {
            int pos; cout<<"Enter position : "<<endl;
            cin>>pos;
            if(pos == 0 )
            {
                deleteAtHead(head);
            }
            else
            {
                deleteFromPosition(head,pos);
            }
             
        }

        else if(op == 6)
        {
            deleteAtHead(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}