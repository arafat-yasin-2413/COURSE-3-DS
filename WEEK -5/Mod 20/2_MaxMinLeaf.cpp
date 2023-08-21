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
// global queue
queue<int> q;

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

void maxMinLeaf(Node *root)
{
    if (root == NULL)
        return ;
    if(root ->left == NULL and 
    root -> right == NULL) 
        q.push(root->val);
    maxMinLeaf(root->left);
    maxMinLeaf(root->right);
   
    
    
}
int main()
{
    Node *root = inputTree();

    maxMinLeaf(root);

    int mx = INT_MIN;
    int mn = INT_MAX;

    while (!q.empty())
    {
        // cout<<q.front()<<" ";
        if (q.front() >= mx)
        {
            mx = q.front();
        }

        if (q.front() <= mn)
        {
            mn = q.front();
        }

        q.pop();
    }

    // cout<<"max = "<<mx<<" "<<"min = "<<mn<<endl;
    cout << mx << " " << mn << endl;

    return 0;
}