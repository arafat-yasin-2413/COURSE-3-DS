/*
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

void print_Linked_List(Node *head)
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

void insertAtTail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    // হেড খালি, নতুন একটা নোড আসছে। তাহলে এই নতুন নোড টাকেই হেড করে দিতে হবে।
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    // আমরা এমন একটা নোডে যাবো যার নেক্সট এ নাল আছে।
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp এখন লাস্ট নোডে
    temp->next = newNode;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Op 1: Insert At Tail" << endl;
        cout << "Op 2: Print Linked List" << endl;
        cout << "Op 3: Terminate " << endl;
        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Please Enter value:";
            int v;
            cin >> v;
            insertAtTail(head, v);
        }

        else if(op == 2)
        {
            print_Linked_List(head);
        }

        else if(op == 3)
        {
            break;
        }

    }

    return 0;
}
*/

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

void insertion_at_Tail(Node *&head, int val)
{
    // List jodi empty thake tokhon amra notun node ta k head node kore dibo. kintu head er reference chara kaj ta ei void function er moddhe korle main function jante parbe na. tai amra head er reference niye kaj korbo. jate kore main function o notun head er sathe updated thakte pare.

    Node *newNode = new Node(val);
    // case 1: list can be empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    // case 2: list is populated
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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

int main()
{
    Node *head = NULL;

    while (true)
    {

        cout << "Option 1 : Insertion At Tail" << endl;
        cout << "Option 2 : Print The List" << endl;
        cout << "Option 3 : Terminate Program" << endl;

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
            break;
        }
    }

    return 0;
}
