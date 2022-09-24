#include<iostream>
using namespace std;

class TreeNode
{
    public:
        int val;
        TreeNode *left,*right=NULL;

};

class Solution
{
    public:
        int sumOfLeftLeaves(TreeNode* root)
        {
            if(root==NULL)
                return 0;
            if(root->left!=NULL and root->left->left==NULL and root->right->left==NULL)
                return root->left->val+sumOfLeftLeaves(root->right);
            return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
        }
};