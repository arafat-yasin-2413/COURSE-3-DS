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

    Node * root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root != NULL) q.push(root);

    while(!q.empty())
    {
        // node ber kore anbo
        Node *f = q.front(); 
        q.pop();

        // kaj korbo
        int l,r;
        cin>>l>>r;
        Node *lf, *rt;

        if(l == -1) lf = NULL;
        else lf = new Node(l);

        if(r == -1) rt = NULL;
        else rt = new Node(r);

        f->left= lf;
        f->right = rt;

        // childrens rekhe dibo
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right); 
           
    }
    return root;
    
}

void levelOrder(Node *root)
{
    if(root == NULL)
    {
        cout<<"There is no Tree my Dear"<<endl;
        return ; 
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

int countNodes(Node *root)
{
    if(root == NULL) return 0;
    int l = countNodes(root->left);
    int r = countNodes(root->right);
    return l+r+1;
}

int countLeaf(Node *root)
{
    if (root == NULL) return 0; 

    if(root->left==NULL and root->right==NULL)
    {
        return 1;
    }

    else 
    {
        int l = countLeaf(root ->left);
        int r = countLeaf(root->right);
        return l+r;
    }
}

int maxHeight(Node *root)
{
    // base case
    if(root == NULL) return 0; 

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    return max(l,r)+1; 
}
/*
10
20 30
70 150 120 40
80 90 -1 -1 130 -1 60 50
-1 -1 100 -1 -1 140 -1 -1 -1 -1
-1 110 -1 -1
-1 -1

*/

int main()
{
    Node * root = input_tree();
    int mxHeight=maxHeight(root);
    cout<<mxHeight<<endl;
     
    
    
    

    



    return 0;
}