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
       int find(vector<int>& nums , int s , int e){
        int idx = s;
       int maxi = nums[s];
        for(int i = s+1 ; i<=e ; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                idx = i;
            }
        }
        return idx;
    }
    TreeNode* solve(vector<int>& nums , int s , int e){
        if(s > e) return NULL;
        int pos = find(nums , s , e);
        TreeNode* root = new TreeNode(nums[pos]);
        root->left = solve(nums , s, pos-1);
        root->right = solve(nums , pos+1 , e);
        return root;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1; 
        return solve(nums , s , e);
        
    }


};