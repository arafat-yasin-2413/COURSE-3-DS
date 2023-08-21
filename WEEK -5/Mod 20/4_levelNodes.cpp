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

stack<int> st;
void noOfLevels(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});

    while (!q.empty())
    {
        // queue theke ber korlam
        pair<Node *, int> pr = q.front();
        Node *f = pr.first;
        int level = pr.second;
        q.pop();

        // jabotiyo kaj
        st.push(level);
        

        // queue te push korlam
        if (f->left)
            q.push({f->left, level + 1});
        if (f->right)
            q.push({f->right, level + 1});
    }
}

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

void levelNodes(Node *root, int lvl,int mxLevel) // 10 3
{
    if (root == NULL)
    {
        return;
    }

    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});

    while (!q.empty())
    {
        // queue theke ber korlam
        pair<Node *, int> pr = q.front();
        Node *f = pr.first;
        int level = pr.second;
        q.pop();

        // jabotiyo kaj
        if(lvl > mxLevel)
        {
            cout<<"Invalid"<<endl;
            return;
        }
        else if (level == lvl )
        {
            cout << f->val << " ";
        }

        // queue te push korlam
        if (f->left)
            q.push({f->left, level + 1});
        if (f->right)
            q.push({f->right, level + 1});
    }
}

/*
10 20 30 40 50 -1 60
-1 -1 -1 -1 -1 -1
*/
int main()
{
    Node *root = inputTree();
    int l;
    cin >> l;

    noOfLevels(root);
    // cout<<st.top()<<endl;
    int highestLevel = st.top();
    levelNodes(root, l,highestLevel);
    

    return 0;
}