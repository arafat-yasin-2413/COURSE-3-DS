#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Adder
{
public:
    T add(T a, T b)
    {
        return a + b;
    }
};

class Add
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};
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
Node *input_tree()
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
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();
        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;
        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int count(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l + r + 1;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}
void preorder(Node *root, long long int *sum)
{
    if (root == NULL)
    {
        return;
    }
    *sum = *sum + root->val;
    preorder(root->left, sum);
    preorder(root->right, sum);
}
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();
        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";
        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
// vector<int> v;
void printLeafNodes(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        // v.push_back(root->val);
    }
    printLeafNodes(root->right, v);
    printLeafNodes(root->left, v);
}

vector<int> printLeafs(Node *root)
{
    vector<int> v;
    printLeafNodes(root, v);
    return v;
}

void getLevelNodes(Node *root)
{
    if (root == NULL)
        return;

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front(); // pair access
        q.pop();
        // pair er value access
        Node *p = pr.first;    // node chilo
        int level = pr.second; // node er level chilo
        cout << "Node: " << p->val << ", Level: " << level << endl;

        if (p->left)
            q.push({p->left, level + 1});
        // level++;
        if (p->right)
            q.push({p->right, level + 1});
    }
}

int main()
{
    Node *root = input_tree();
    return 0;
}