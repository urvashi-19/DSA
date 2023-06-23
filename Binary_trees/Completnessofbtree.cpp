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
    bool isCompleteTree(TreeNode* root) {
        bool flag = false;
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty()){
           
            TreeNode* top = q.front();
            q.pop();
            if(top==NULL){
                flag = true;
            }
            else{
                if(flag==true) return false;
            
                    q.push(top->left);
                
                  q.push(top->right);
                
            }
        
        }
        return true;
        
    }


};