#include <algorithm>
#include<iostream>
#include<queue>
using namespace std;

class TreeNode
{

};

class Solution
{
    public:
        // int maxDepth(TreeNode* root)
        // {
        //     if(root==NULL)
        //     {
        //         return 0;
        //     }
        //     int max1=maxDepth(root->left);
        //     int max2=maxDepth(root->right);
        //     return max(max1,max2)+1;
        // }

        int maxDepth(TreeNode* root)
        {
            if(root==NULL)
            {
                return 0;
            }
            queue<TreeNode*>q;
            q.push(root);
            int count=0;
            while(!q.empty())
            {
                int s=q.size();
                count++;
                for(auto i=0;i<s;i++)
                {
                    TreeNode *temp=q.front();
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
            }
            return count;
        }

};