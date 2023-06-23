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
      bool isCousins(TreeNode* root, int x, int y) {
       
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
           bool flag = false;
           bool flag1 = false;
            
            int n = q.size();
            while(n--){
            TreeNode*top = q.front();
                if(top->left and top->right){
                    if(top->left->val==x and top->right->val==y)
                        return false;
                }
                 if(top->left and top->right){
                    if(top->left->val==y and top->right->val==x)
                        return false;
                }
                if(top->val==x)flag=true;
                if(top->val==y)flag1 = true;
            if(top->left)q.push(top->left);
            if(top->right)q.push(top->right);
            
            q.pop();
         
}
            if(flag==true && flag1==true)return true;
        }
        return false;
        
    }


};