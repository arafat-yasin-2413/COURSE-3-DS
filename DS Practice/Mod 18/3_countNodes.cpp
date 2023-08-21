#include<bits/stdc++.h>
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

int countNodes(Node *root)
{
    if(root == NULL) return 0; 
    int l = countNodes(root->left);
    int r = countNodes(root->right);

    return l+r+1;
}



int countLeafNodes(Node *root)
{
    if(root == NULL) return 0; 
    countLeafNodes(root->left);
    countLeafNodes(root->right);

    return 1;
}

int main()
{
    Node * root = new Node (10);
    Node * a = new Node (20);
    Node * b = new Node (30);
    Node * c = new Node (40);
    Node * d = new Node (50);
    Node * e = new Node (60);
    Node * f = new Node (70);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    d->left = e;
    b->right = f;

    int nodes = countNodes(root);
    cout<<nodes<<endl;

    int leafs = countLeafNodes(root);
    cout<<leafs<<endl;
    

    return 0;
}