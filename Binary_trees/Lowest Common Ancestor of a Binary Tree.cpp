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
         TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root == p  || root ==q) return root;
       TreeNode* left =  lowestCommonAncestor(root->left , p , q);
       TreeNode* right =  lowestCommonAncestor(root->right , p , q);
        if(left==NULL && right!=NULL) return right;
        else if(right == NULL && left!=NULL) return left;
        else if (right==NULL && left==NULL) return NULL;
        else return root;
        
    }


};