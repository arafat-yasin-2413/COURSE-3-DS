

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

void insertion_at_Tail(Node *&head, int val);
void print_linked_list(Node *head);
void insert_at_position(Node *head, int pos, int val);

void insertion_at_Tail(Node *&head, int val)
{
    // List jodi empty thake tokhon amra notun node ta k head node kore dibo. kintu head er reference chara kaj ta ei void function er moddhe korle main function jante parbe na. tai amra head er reference niye kaj korbo. jate kore main function o notun head er sathe updated thakte pare.

    Node *newNode = new Node(val);
    // case 1: list can be empty
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted the first node" << endl;
        return;
    }

    Node *temp = head;
    // case 2: list is populated
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

    cout << endl
         << "Inserted at Tail " << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << endl
         << "Your Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    // i = 0
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << "Inserted at position " << pos << endl
         << endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << endl;
        cout << "Option 1 : Insertion At Tail" << endl;
        cout << "Option 2 : Print The List" << endl;
        cout << "Option 3 : Insert at Position" << endl;
        cout << "Option 4 : Terminate" << endl;

        int op;
        cout << "Enter your Option : ";
        cin >> op;

        if (op == 1)
        {
            // ekhane ami tail a ekta node add korbo. tahole amar ekta function lagbe. Jei function k ami ekhan theke head pass korbo and ekta value pass korbo.
            int val;
            cout << "Enter Value : ";
            cin >> val;
            insertion_at_Tail(head, val);
        }

        else if (op == 2)
        {
            print_linked_list(head);
        }

        else if (op == 3)
        {
            int pos;
            cout << "Enter position : ";
            cin >> pos;
            cout << "Enter value : ";
            int val;
            cin >> val;

            insert_at_position(head, pos, val);
        }

       

        else if (op == 4)
        {
            break;
        }
    }

    return 0;
}
