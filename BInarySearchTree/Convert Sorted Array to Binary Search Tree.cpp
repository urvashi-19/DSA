# include<bits/stdc++.h>
using namespace std;
class TreeNode {
public:  
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    
     TreeNode* solve(vector<int>& nums , int s , int e){
        if(s>e) return NULL;
        int mid = (s+e)/2;
        int ele = nums[mid];
       TreeNode* root = new TreeNode(ele);
        root->left = solve(nums , s , mid-1);
        root->right = solve(nums , mid+1 , e);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        
        return solve(nums , s , e);
    }
};