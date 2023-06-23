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
     public:
    int ans = 0;
    int solve(TreeNode* root){
        if(root==NULL) return 0;
        solve(root->right);
        ans = ans + root->val;
        root->val = ans;
        solve(root->left);
        return ans;
    }
    TreeNode* convertBST(TreeNode* root) {
        solve(root);
        return root;
       
    }


};