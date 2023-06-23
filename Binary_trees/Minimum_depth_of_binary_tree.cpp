#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

     
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        else if(!root->left and !root->right){
            return 1; // leaf node h
        }
        else if(!root->left and root->right){       //skewed right case
            return 1 + minDepth(root->right);
        }
        else if(!root->right and root->left){     //skewed left case
            return 1 + minDepth(root->left);
        }
        else{
            return 1 +  min(minDepth(root->left) , minDepth(root->right) );
        }
        
    }
};
};