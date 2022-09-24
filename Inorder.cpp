#include<iostream>
#include<vector>
using namespace std;

class TreeNode
{
    public:
        int val;
        TreeNode *left=nullptr;
        TreeNode *right=nullptr;

        TreeNode(int val)
        {
            this->val=val;
        }
};

class Solution 
{
    public:

        vector<int>ans;
        int solve(TreeNode *root)
        {
            if(root==NULL)
            {
                return 0;
            }
            solve(root->left);
            ans.push_back(root->val);
            solve(root->right);
            return 0;
        }

        vector<int> inorderTraversal(TreeNode* root) 
        {
            solve(root);
            return ans;
        }
};
