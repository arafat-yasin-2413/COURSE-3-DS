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

void insertion_at_Tail(Node *&head,Node *&tail, int val);
void input_linked_list(Node *&head,Node *&tail, int val);
void print_linked_list(Node *head,Node *tail);
int size_of_linked_list(Node *head,Node *tail);

    








void insertion_at_Tail(Node *&head,Node *&tail, int val)
{
    // List jodi empty thake tokhon amra notun node ta k head node kore dibo. kintu head er reference chara kaj ta ei void function er moddhe korle main function jante parbe na. tai amra head er reference niye kaj korbo. jate kore main function o notun head er sathe updated thakte pare.

    Node *newNode = new Node(val);
    // case 1: list can be empty
    if (head == NULL)
    {
        head = newNode;

        return;
        // 'return' করে দিলে আর নিচে নামবে না।
    }

    Node *temp = head;
    // case 2: list is populated
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}


void input_linked_list(Node *&head,Node *&tail, int val)
{
    insertion_at_Tail(head,tail, val);
}




void print_linked_list(Node *head,Node *tail)
{
    cout << "Your Linked List : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}



int size_of_linked_list(Node *head,Node *tail)
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
    Node *tail = NULL;

    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        input_linked_list(head,tail, val1);
    }

    print_linked_list(head,tail);
    // cout << endl<< "size of list 1 : " << size_of_linked_list(head) << endl;
    int sz1 = size_of_linked_list(head,tail);

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

        input_linked_list(head2,tail2, val2);
    }

    print_linked_list(head2,tail2);
    // cout << endl<< "size of list 2 : " << size_of_linked_list(head2);

    int sz2 = size_of_linked_list(head2,tail2);

    if (sz1 == sz2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}