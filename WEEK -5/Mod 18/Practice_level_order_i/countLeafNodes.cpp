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

/*

*/

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

int countNodes(Node *root)
{
    if(root == NULL) return 0; // base case
    int l = countNodes(root->left);
    int r = countNodes(root->right); 
    return l+r+1;

}

int countLeafNodes(Node *root)
{
    if(root == NULL) return 0;
    if(root->left == NULL and 
    root->right == NULL) return 1;
    else 
    {
        int l = countLeafNodes(root->left);
        int r = countLeafNodes(root->right);
        return l+r;
    }
}

/*
10
20 50
30 40 70 60
-1 -1 -1 -1 -1 80 -1 -1
-1 -1
*/
int main()
{

    Node *root = input_tree();
    int cntLeafs = countLeafNodes(root);
    cout<<cntLeafs<<endl;
    

    return 0;
}