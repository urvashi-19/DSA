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

       void solve(TreeNode* root , TreeNode*& prev){
        if(root==NULL) return;
        solve(root->right , prev);
        solve(root->left , prev);
        root->right = prev;
        root->left = NULL;
        prev = root;
    }
    void flatten(TreeNode* root) {
        TreeNode* prev = NULL;
        solve(root , prev);
    }
};
// first we keep on going to right and left