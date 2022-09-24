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