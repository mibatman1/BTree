#include<iostream>
#include<vector>
#include<deque>
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
        vector<vector<int>> zigzagLevelOrder(TreeNode* root)
        {
            vector<vector<int>>out;
            if(root==NULL)
            {
                return out;
            }
            deque<TreeNode*>q;
            q.push_front(root);
            vector<int>temp;
            int l=0;
            while(!q.empty())
            {
                int n=q.size();
                for(auto i=0;i<n;i++)
                {
                    if(l%2)
                    {
                        auto t=q.back();
                        temp.push_back(t->val);
                        q.pop_back();
                        if(t->right!=NULL)
                        {
                            q.push_back(t->right);
                        }
                        if(t->left!=NULL)
                        {
                            q.push_back(t->left);
                        }
                    }
                    else
                    {
                        auto t=q.front();
                        temp.push_back(t->val);
                        q.pop_front();
                        if(t->left!=NULL)
                        {
                            q.push_front(t->left);
                        }
                        if(t->right!=NULL)
                        {
                            q.push_front(t->right);
                        }
                    }
                }
                out.push_back(temp);
                l++;
            }
            return out;
        }
};