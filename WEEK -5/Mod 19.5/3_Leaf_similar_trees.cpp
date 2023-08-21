/***********************************************************************
 *              LeetCode Solution








/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */



/*
class Solution {
public:

vector<int> v1;
vector<int> v2;

void leaf_similar(TreeNode *root,int x)
{
    if(root == NULL) return ;
    if(root->left == NULL and root->right==NULL) 
    {
        if(x == 1) 
        {
            v1.push_back(root->val);
        }
        if(x == 2)
        {
            v2.push_back(root->val);
        }

        // return;
        // এইখানে রিটার্ন করলে তো আমি প্রোগ্রাম কে এখানেই থামিয়ে দিচ্ছি।
        // এখানে প্রোগ্রামকে থামানো যাবে না। 
        // প্রথমেই রুট নাল হলেই কেবল রিটার্ন করতে হবে । অন্যথায় আমরা 
        // ভেক্টরে পুশ করছি... 
    }
    leaf_similar(root->left,x);
    leaf_similar(root->right,x);
}

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       int x1 = 1, x2 = 2;
       leaf_similar(root1,x1);
       leaf_similar(root2,x2);

     

      return v1==v2;

    }
};
*/


///////////////// MY Solution 


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
3 5 1 6 2 9 8 -1 -1 7 4 -1 -1 -1 -1
-1 -1 -1 -1
3 5 1 6 7 4 2
-1 -1 -1 -1 -1 -1 9 8
-1 -1 -1 -1


1 2 3 -1 -1 -1 -1
1 3 2 -1 -1 -1 -1

*/

queue<int> q1;
queue<int> q2;

void leaf_similar(Node *root,int x)
{
    if(root == NULL) return ;
    if(root->left == NULL and root->right==NULL) 
    {
        if(x == 1) 
        {
            q1.push(root->val);
        }
        if(x == 2)
        {
            q2.push(root->val);
        }

        
    }
    leaf_similar(root->left,x);
    leaf_similar(root->right,x);
}

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
    Node *root2 = input_tree();
    // levelOrder(root);

    int x1 = 1, x2=2;
    leaf_similar(root,x1);
    leaf_similar(root2,x2);

    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop(); 
    }

    cout<<endl;
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop(); 
    }

    return 0;
}