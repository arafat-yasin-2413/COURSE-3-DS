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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *delNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        delete delNode;
        tail->next = NULL;
    }

    int Top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }

        else
            return false;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *delNode = head;
        head = head->next;
        delete delNode;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }

        else
            return false;
    }
};

int main()
{

    int n, m;
    myStack st;
    myQueue q;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int j = 0; j < m; j++)
    {
        int y;
        cin >> y;
        q.push(y);
    }

    bool flag = true;
    if (n != m)
    {
        cout << "NO" << endl;
    }

    else
    {
        while (!st.empty())
        {
            int a = st.Top();
            int b = q.front();
            if (a != b)
                flag = false;

            st.pop();
            q.pop();
        }

        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

