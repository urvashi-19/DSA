
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
     TreeNode* solve(TreeNode* &root , int ele){
        if(root==NULL) return  root = new TreeNode(ele);
        if(ele < root->val){
            root->left = solve(root->left , ele);
        }
        else if(ele > root->val){
            root->right = solve(root->right , ele);
        }
        return root;
    }
    //// first element of preorder array forms the root element of tree
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* ans = NULL;
        for(auto it : preorder){
            solve(ans , it);
        }
        return ans;
        
    }


};