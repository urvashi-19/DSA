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
    vector<TreeNode*>ans;
    unordered_map<string , int>mp;
    string solve(TreeNode* root){
        if(root==NULL) return "$";
        string s = to_string(root->val) + "&" + solve(root->left) + "&" + solve(root->right);
        mp[s]++;
        if(mp[s]==2){
            ans.push_back(root);
        }
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        solve(root);
        return ans;
    }


};