#include <algorithm>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
        int val;
        TreeNode *left,*right=nullptr;
};

class Solution
{
    public:
        int ans=0;
        void pre(TreeNode *root,int mx)
        {
            if(!root)
                return;
            if(mx>=root->val)
            {
                ans++;
                mx=root->val;
            }
            pre(root->left,mx);
            pre(root->right,mx);
        }
        
        int goodNodes(TreeNode* root, int mx=INT_MIN)
        {
            pre(root,INT_MIN);
            return ans;
        }
};