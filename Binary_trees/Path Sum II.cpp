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

    vector<vector<int>> res;
    void solve(TreeNode *root, int targetSum, int sum, vector<int> ans)
    {
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL)
        {
            int temp = sum + root->val;
            if (temp == targetSum)
            {
                ans.push_back(root->val);
                res.push_back(ans);

                return;
            }
            else
            {

                return;
            }
        }
        sum = sum + root->val;
        ans.push_back(root->val);
        solve(root->left, targetSum, sum, ans);
        solve(root->right, targetSum, sum, ans);
        ans.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<int> ans;
        solve(root, targetSum, 0, ans);
        return res;
    }
};