#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, string s);
void print(Node *head);
Node *find(Node *head, Node *tail, string s);
void next(Node *&cur);
void visit(Node *head, Node *tail, Node *&current, string s);
void prev(Node *&cur);

void insertAtTail(Node *&head, Node *&tail, string s)
{
    Node *newNode = new Node(s);
    if (head == NULL and tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// find function একটা নোড কে খুজে দিবে
// অর্থাৎ নোড/ নাল রিটার্ন করবে
Node *find(Node *head, Node *tail, string s)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == s)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void visit(Node *head, Node *tail, Node *&current, string s)
{
    Node *searching = find(head, tail, s);
    if (searching != NULL)
    {
        cout << searching->val << endl;
        current = searching;
    }

    else
    {
        // na thakle
        cout << "Not Available" << endl;
    }
}

void prev(Node *&cur)
{
    if (cur->prev == NULL)
    {
        cout << "Not Available" << endl;
    }

    else
    {
        cur = cur->prev;
        cout << cur->val << endl;
    }


}

void next(Node *&cur)
{
    if (cur->next == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cur = cur->next;
        cout << cur->val << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string st;
    while (true)
    {
        cin >> st;
        if (st == "end")
        {
            break;
        }
        // insert at tail
        insertAtTail(head, tail, st);
    }
    // print(head);

    Node *current = find(head, tail, head->val);

    // following commands
    int q;
    cin >> q;
    while (q--)
    {
        string command;
        cin >> command;
        if (command == "visit")
        {
            string adrs;
            cin >> adrs;
            // যাওয়ার আগে নিশ্চিত করতে হবে
            // যে নোড টা লিস্টে আছে কিনা
            // তার মানে find . ekta find function
            // baniye ashi
            visit(head, tail, current, adrs);
            // cout<<"current : "<<current->val<<endl;
        }

        if (command == "next")
        {
            next(current);
        }

        if (command == "prev")
        {
            prev(current);
            // cout<<"current : "<<current->val<<endl;
        }

        // cout << "current : " << current->val << endl;
    }

    return 0;
}