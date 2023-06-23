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
       int cnt = 0;
    void  dfs(TreeNode*root , long long sum , long long tsum){
        if(root==NULL) return ;
          sum = sum + root->val;
        if(sum == tsum)cnt++;
        dfs(root->left , sum , tsum);
        dfs(root->right , sum , tsum);
    }
    void solve(TreeNode* root , int targetSum){
        if(root==NULL) return;
        dfs(root , 0 , targetSum);
        solve(root->left , targetSum);
        solve(root->right , targetSum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        solve(root , targetSum);
        return cnt;
    }


};