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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return root;
        while(root!=NULL){
            if(root==NULL || root == p || root==q){
                return root;
            }
            
            if(root->val < p->val && root->val < q->val){
                root = root->right;
            }
            else if (root->val > p->val && root->val > q->val){
                root = root->left;
            }
            else{
                return root;
            }
        }
        return root;
    }


};