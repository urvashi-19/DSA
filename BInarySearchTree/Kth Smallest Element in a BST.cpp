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
    void solve(TreeNode* root , int &k){
        if(root==NULL) return ;
        solve(root->left , k);
        k--;
        if(k==0){
            ans = root->val;
        }
        solve(root->right , k);
    }
    int kthSmallest(TreeNode* root, int k) {
        solve(root , k);
        return ans;
        
    } 


};