//Invert the binary tree

#include<iostream>
#include<stack>
#include <type_traits>
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
        TreeNode* invertTree(TreeNode* root)
        {

            if(root==NULL)
            {
                return root;
            }
            if(root->left!=NULL or root->right!=NULL)
            {
                auto node=root->left;
                root->left=root->right;
                root->right=node;
            }
            invertTree(root->left);
            invertTree(root->right);
            return root;
            // stack<TreeNode*>st;
            // st.push(root);
            // while(!st.empty())
            // {
            //     auto node=st.top();
            //     st.pop();
            //     if(node!=NULL)
            //     {
            //         st.push(node->left);
            //         st.push(node->right);
            //         swap(node->left,node->right);
            //     }
            // }
            // return root;

        }
};