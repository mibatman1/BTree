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
    vector<vector<int>>out;
    public:

        void solve(TreeNode* root,int target,vector<int> ds)
        {
            if(root->left==NULL && root->right==NULL)
            {
                ds.push_back(root->val);
                int sum=0;
                for(int x:ds)
                {
                    sum+=x;
                }
                if(sum==target)
                {
                    out.push_back(ds);
                }
                return;
            }
            ds.push_back(root->val);
            if(root->left!=NULL)
            {
                solve(root->left,target,ds);
            }
            if(root->right!=NULL)
            {
                solve(root->right,target,ds);
            }
        }

        vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
        {
            if(root==NULL)
            {
                return out;
            }

            vector<int>ds;
            solve(root,targetSum,ds);
            return out;
        }
};