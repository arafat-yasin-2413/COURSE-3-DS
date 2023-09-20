#include <bits/stdc++.h>
using namespace std;
// Accepted
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

void visit_adrs(Node *&current, string str, Node *head, Node *tail);
void next(Node *&cur);
void prev(Node *&cur);

void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

Node *find(Node *head, Node *tail, string st)
{

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == st)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void next(Node *&cur)
{
    // if(cur != NULL or cur ->next != NULL)
    if (cur->next != NULL)
    {
        cur = cur->next;
        cout << cur->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void prev(Node *&cur)
{
    // if( cur != NULL or cur ->prev != NULL)
    if (cur->prev != NULL)
    {
        cur = cur->prev;
        cout << cur->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void visit_adrs(Node *&current, string str, Node *head, Node *tail)
{

    Node *searching = find(head, tail, str);

    if (searching != NULL)
    {
        current = searching;
        cout << current->val << endl;
    }

    else
    {
        cout << "Not Available" << endl;
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
        insert_at_tail(head, tail, st);
    }

    // print_list(head);
    // cout<<"head after insertion "<<head->val<<endl
    //     <<"tail after insertion "<<tail->val<<endl;

    // cout<<"value of head : "<<head->val<<endl;
    Node *current = find(head, tail, head->val);
    // head -> val = fb
    // cout<<"value of current : "<<current->val<<endl;

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
            tail = current;
            // cout<<"head -> val = "<<head->val<<endl<<"tail -> val = "<< tail->val <<endl;
            visit_adrs(current, adrs, head, tail);
        }

        else if (command == "next")
        {
            next(current);
        }

        else if (command == "prev")
        {
            prev(current);
        }
    }

    return 0;
}