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
    int ans = INT_MIN;
    int solve(TreeNode* root){
        if(root==NULL) return 0;
        int l = max(solve(root->left) , 0);
        int r = max(solve(root->right) , 0);
        ans = max(ans , root->val + l+ r);
        return root->val + max(l , r);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return ans;
        
    }
};