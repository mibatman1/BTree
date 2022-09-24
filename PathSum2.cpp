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
        bool hasPathSum(TreeNode* root, int targetSum)
        {
            if(root==NULL)
                return false;
            
            targetSum-=root->val;
            if(!root->left and !root->right and targetSum==0)
                return true;
            
            return hasPathSum(root->left,targetSum) or hasPathSum(root->right,targetSum);
        }
};