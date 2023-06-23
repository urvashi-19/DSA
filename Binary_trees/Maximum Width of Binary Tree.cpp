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
          
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode* , int>>q;
        q.push({root , 0});
         long ans  = 0;
        while(!q.empty()){
            long  start = q.front().second;
            long  end = q.back().second;
            ans = max(ans , ((end -  start) + 1));
            long n = q.size();
            while(n--){
                TreeNode* top = q.front().first;
                long idx = q.front().second;
                q.pop();
                if(top->left){
                    q.push({top->left , 2*idx+1});
                }
                if(top->right){
                    q.push({top->right ,2*idx+2});
                }
            }
        }
        return ans;
        
    }


};