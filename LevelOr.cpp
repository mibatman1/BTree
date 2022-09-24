#include<iostream>
#include<vector>
#include<queue>
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
        vector<vector<int>> levelOrder(TreeNode* root) 
        {
            vector<vector<int>>out;
            if(root==NULL)
            {
                return out;
            }
            vector<int>ve;
            queue<TreeNode*>q;
            q.push(root);
            while(!q.empty())
            {
                int n=q.size();
                for(auto i=0;i<n;i++)
                {
                  TreeNode *temp=q.front();
                  ve.push_back(temp->val);
                  q.pop();
                  if(temp->left!=NULL)
                  {
                    q.push(temp->left);
                  }
                  if(temp->right!=NULL)
                  {
                    q.push(temp->right);
                  }
                  out.push_back(ve);  
                }
            }
            return out;
        }
};