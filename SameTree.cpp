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
        vector<int>ans;
        vector<int>Traversal(TreeNode* root)
        {
            if(root==NULL)
            {
                ans.push_back(0);
                return ans;
            }
            Traversal(root->val);
            Traversal(root->left);
            Traversal(root->right);
            return ans;
        }

        bool isSameTree(TreeNode* p, TreeNode* q)
        {
            vector<int>a=Traversal(p);
            vector<int>b=Traversal(q);
            if(a==b)
            {
                return true;
            }
            return false;
        }
}