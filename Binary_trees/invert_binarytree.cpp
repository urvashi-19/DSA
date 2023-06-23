#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
         invertTree(root->left);
        invertTree(root->right);
        swap(left , right);
        return root;
        
    }
  
};