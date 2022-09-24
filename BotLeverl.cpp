//Bottom levelorder Traversal

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
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
        vector<vector<int>> levelOrderBottom(TreeNode* root)
        {
            vector<vector<int>>out;
            if(root==NULL)
            {
                return out;
            }
            queue<TreeNode*>q;
            q.push(root);
            while(!q.empty())
            {
                vector<int>s;
                int n=q.size();
                for(auto i=0;i<n;i++)
                {
                    auto temp=q.front();
                    s.push_back(temp->val);
                    q.pop();

                    if(temp->left!=NULL)
                    {
                        q.push(temp->left);
                    }
                    if(temp->right!=NULL)
                    {
                        q.push(temp->right);
                    }
                }
                out.push_back(s);
            }
            reverse(out.begin(),out.end());
            return out;
        }

};