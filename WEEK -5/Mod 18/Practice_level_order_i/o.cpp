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


Node * input_tree()
{
    int val;
    cin>>val;

    Node *root ;
    if(val == -1) root = NULL;
    else root = new Node (val);

    queue<Node *> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        // 1. ber kore anlam
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo kaj
        int l, r; cin>>l>>r;

        Node *myLeft, *myRight;

        if(l == -1)
            myLeft = NULL;
        else
            myLeft = new Node (l);
        if(r == -1)
            myRight = NULL;
        else 
            myRight = new Node(r);   
        
        // connection
        if(myLeft) f->left = myLeft;
        if(myRight) f->right = myRight;

        // 3. queue te push korlam
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
    return root;
}

void levelOrder(Node *root)
{   
    if(root == NULL) 
    {
        cout<<"There is no tree"<<endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right ) q.push(f->right);
    }
}

int main()
{
    Node *root = input_tree();
    levelOrder(root);

    
    return 0;
}