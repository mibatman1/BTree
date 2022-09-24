#include<iostream>
#include<vector>
using namespace std;

class TreeNode
{
    public:
        int val;
        TreeNode *left=nullptr;
        TreeNode *right=nullptr;

        TreeNode(int value)
        {
            this->val=value;
        }
};


class Solution 
{
    public:
        vector<int> preorderTraversal(TreeNode* root) 
        {
            vector<int>ans;
            ans.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
            return ans;
        }
    };