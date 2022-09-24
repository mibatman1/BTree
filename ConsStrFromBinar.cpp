//Construct String from Binary Tree
#include<iostream>
#include<string>
using namespace std;

class TreeNode
{
    public:
        int val;
        TreeNode *left, *right=nullptr;
};

class Solution
{
    public:
        string tree2str(TreeNode* root)
        {
            string ans;
            ans+=to_string(root->val);
            if(root->left)
            {
                ans+='('+tree2str(root->left)+')';
            }
            if(root->right)
            {
                if(!root->left)
                    ans+="()";
                ans+='('+tree2str(root->right)+')';
            }
            return ans;
        }
};