
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

int main()
{
    Node *head_1 = NULL;
    int val_1;

    while (true)
    {
        cin >> val_1;

        if (val_1 == -1)
            break;
        insertAtTail(head_1, val_1);
    }

    Node *head_2 = NULL;
    int val_2;
    while (true)
    {
        cin >> val_2;
        if (val_2 == -1)
            break;
        insertAtTail(head_2, val_2);
    }

    int sz1 = sizeOfList(head_1);
    int sz2 = sizeOfList(head_2);

    if (sz1 != sz2)
    {
        cout << "NO" << endl;
        return 0;
    }

    Node *temp1 = head_1;
    Node *temp2 = head_2;

    bool flag = true;
    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
            flag = false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    // cout<<flag <<endl;
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    
    
    return 0;
}