#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

class TreeNode
{
    public:
        int val;
        TreeNode *left,*right=nullptr;

        TreeNode(int val)
        {
            this->val=val;
        }
};

class Solution
{
    public:
        TreeNode* build(vector<int>nums,int l, int h)
        {
            if(l>h || h>=nums.size() || l<0)
            {
                return NULL;
            }
            int in=l;
            int max=nums[l];
            for(auto i=l+1;i<=h;i++)
            {
                if(max>nums[i])
                {
                    in=i;
                    max=nums[i];
                }
            }
            TreeNode* root=new TreeNode(max);
            root->left=build(nums,l,in-1);
            root->right=build(nums,in+1,h);
            return root;
        }

        TreeNode* constructMaximumBinaryTree(vector<int>& nums)
        {
            return build(nums,0,nums.size()-1);
        }
};
