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

void insert_at_tail(Node *&head, Node *&tail, int val)
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

void print_list_normal(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void palindrome_check(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    bool is_palindrome = false;
    while (i != j and i->next != j)
    {
        if(i->val != j->val)
        {
            is_palindrome = true;
            // cout<<"is_pal = "<<is_palindrome<<endl;
            cout<<"NO"<<endl;
            return ;
        }

        i = i->next ;
        j = j->prev ;


    }
    if(i->val != j->val )
    {
        is_palindrome = true;
    }


    // cout<<"is_palindrome = "<<is_palindrome<<endl;
    if(is_palindrome == true) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    


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
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }
    // print_list_normal(head);
    palindrome_check(head,tail);

    return 0;
}