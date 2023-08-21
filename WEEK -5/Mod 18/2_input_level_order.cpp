#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

/*
10 20 60 30 50 70 -1
-1 40 -1 -1 -1 -1
80 -1 -1-1
*/
Node* input_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    // nijer haat a queue te root ta push korbo
    queue<Node *> q;

    // root null o hoite pare. tai push korar agee check kore nicchi
    if (root)
        q.push(root);

    while (!q.empty())
    {
        // 1. node ber kore anbo
        Node *f = q.front();
        q.pop();

        // 2. kaj korbo
        int l, r;
        cin >> l >> r;
        Node *left, *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        //connection
        // if (left)
            f->left = left;
        // if (right)
            f->right = right;

        // 3. childrens rekhe dibo
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        
    }
    return root;
}

void levelOrder(Node *root)
{
    if (root == NULL)
    {
        cout << "There is no Tree my Dear" << endl;
        return;
    }
    // 1
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1. onno kothau rakha
        Node *f = q.front();
        q.pop();

        // 2. Jabotiyo kaj
        cout << f->val << " ";

        // 3. children rakhbo
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = input_tree();
    levelOrder(root);

    return 0;
}