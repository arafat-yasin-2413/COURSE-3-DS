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

Node *inputTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

long long int levelOrderSum(Node *root)
{
    if(root == NULL) 
    {
        return 0;
    } 
    queue<Node *> q;
    q.push(root);


    long long int sum =0;
    while(!q.empty())
    {
        Node *f = q.front();
        q.pop();

        // cout<<f->val<<" ";
        sum+= f->val;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return sum;
}

int main()
{
    Node *root = inputTree();
    long long int s = levelOrderSum(root);
    cout<<s<<endl;

    return 0;
}