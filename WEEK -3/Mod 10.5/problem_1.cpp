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

int size(Node *head);

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

int size(Node *head)
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

void is_lists_same(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    int sz1 = size(temp1);
    int sz2 = size(temp2);

    // cout<<"sz1 = "<<sz1<<endl;
    // cout<<"sz2 = "<<sz2<<endl;

    bool flag = false;
    if (sz1 != sz2)
    {
        cout << "NO" << endl;
        return;
    }

    
    else
    {
        Node *m = temp1;
        Node *n = temp2;
        while (m != NULL)
        {
            // cout << m->val << " " << n->val << endl;
            if(m->val != n->val)
            {
                flag = true;
                break;
            }

            m = m->next;
            n = n->next;
        }

        if(flag == false ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }

        insert_at_tail(head2, tail2, val2);
    }
    // print_list_normal(head2);

    // cout<<size(head)<<endl;
    // cout<<size(head2)<<endl;

    is_lists_same(head, head2);

    return 0;
}