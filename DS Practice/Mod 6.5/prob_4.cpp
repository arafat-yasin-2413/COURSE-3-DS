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
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    printList(head);
}

int sizeOfList(Node *head)
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

void insertAtPosition(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{
    Node *head = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, val);
    }

    // printList(head);
    // int sz = sizeOfList(head);

    int q;
    cin >> q;
    while (q--)
    {

        int pos, v;
        cin >> pos >> v;
        int sz = sizeOfList(head);
        if (pos > sz)
            cout << "Invalid" << endl;
        else if (pos == 0)
            insertAtHead(head, v);
        else if (pos == sz)
        {
            insertAtTail(head, v);
            printList(head);
        }
        else
        {
            insertAtPosition(head, pos, v);
            printList(head);
        }
    }

    return 0;
}