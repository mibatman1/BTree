//To Find the min depth of the Binary Tree

#include <algorithm>
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
        int minDepth(TreeNode* root) 
        {
            if(root==NULL)
            {
                return 0;
            }
            int min1=minDepth(root->left);
            int min2=minDepth(root->right);
            if(min1==0 or min2==0)
            {
                return max(min1,min2)+1;
            }
            return min(min1,min2)+1;
        }
};