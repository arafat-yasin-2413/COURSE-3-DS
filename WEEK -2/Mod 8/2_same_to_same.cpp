
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

void insert_At_Tail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    // corner case: list can be empty(head is at null)
    if (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void print_linked_list(Node *head)
{
    cout << "My Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl
         << endl;
}

int size_of_linked_list(Node *head)
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
    Node *head = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insert_At_Tail(head, value);
    }

    // print_linked_list(head);

    Node *head2 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_At_Tail(head2, val);
    }

    // print_linked_list(head2);

    int sz_1 = size_of_linked_list(head);
    int sz_2 = size_of_linked_list(head2);
    // cout<<sz_1<<" "<<sz_2<<endl;
    int mx_size = max(sz_1, sz_2);

    // cout<<mx_size<<endl;

    bool flag = true;
    bool flag2 = true;

    Node *i = head;
    Node *j = head2;
    while (mx_size--)
    {

        if (sz_1 == sz_2)
        {
            if (i != NULL and j != NULL)
            {
                if (i->val != j->val)
                {
                    // cout << i->val << " " << j->val << endl;
                    flag = false;
                }

                i = i->next;
                j = j->next;
            }

            else if(i != NULL or j!=NULL)
            {
                flag = false;
            }
        }

        else if(sz_1 != sz_2)
        {
            flag2 = false;
        }

        
    }

    // cout<<flag<<endl;

    if(flag == 0) cout<<"NO"<<endl;
    else if(flag2 == false) cout<<"NO"<<endl; 
    else if(flag == 1) cout<<"YES"<<endl;

    return 0;
}