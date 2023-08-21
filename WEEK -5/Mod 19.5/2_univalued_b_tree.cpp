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

bool unival(TreeNode*root,int x)
{
    
    if(root == NULL) return true;
    bool l = unival(root->left,x);
    bool r = unival(root->right,x);

    if(x!= root->val) return false; 
    // নাইম ভাইয়াঃ আমাদেরকে ভ্যালু সেম চেক করতে বলা হলে আমরা 'সেম না কিনা' চেক করবো।
    // এইখানে x == root->val না লিখে আমরা x != root->val চেক করলে স্মার্ট এবং সহজ হবে।

    
    // return (l and r);
    if(l == true and r == true) return true;
    else return false;

    

}
    bool isUnivalTree(TreeNode* root) {
        
        int x = root->val;
        bool result = unival(root,x);

        return result;
    }
};


*/