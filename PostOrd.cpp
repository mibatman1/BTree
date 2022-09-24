#include<iostream>
#include<vector>
#include<stack>
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
        vector<int> postorderTraversal(TreeNode* root)
        {
            vector<int>out;
            if(root==NULL)
            {
                return out;
            }
            stack<TreeNode*>d;
            d.push(root);
            while(!d.empty())
            {
                TreeNode* temp=d.top();
                out.push_back(temp->val);
                d.pop();

                if(temp->left!=NULL)
                {
                    d.push(temp->left);
                }

                if(temp->right!=NULL)
                {
                    d.push(temp->right);
                }

            }
            return out;

        } 
};