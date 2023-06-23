# include<bits/stdc++.h>
using namespace std;
class TreeNode {
public:  
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
    
   bool flag = false;
    void solve(TreeNode* root , int targetSum , int sum){
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL){
            int temp = sum + root->val;
            if(temp == targetSum){
                flag = true;
                return;
                
            }
            
            else return;
        }
        
        sum = sum + root->val;
        solve(root->left , targetSum , sum);
        solve(root->right , targetSum , sum);
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        solve(root , targetSum , 0);
        return flag;
    }
};