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
      int ans = 0;
    int solve(TreeNode* root){
        if(root==NULL) return 0;
        int left = solve(root->left);
        int right = solve(root->right);
        ans = max(ans , left + right);
        return 1 + max(left , right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return ans;
    }


};