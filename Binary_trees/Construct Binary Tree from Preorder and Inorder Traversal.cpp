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
    
    int find(int start , int e , int ele , vector<int>& inorder ){
        
        for(int i = start ; i<=e ; i++){
            if(inorder[i]==ele) return i;
        }
        return -1;
}
   TreeNode*  solve(vector<int>& preorder, vector<int>& inorder , int s , int e , int &idx){
        if(s>e) return NULL ;
        
       int ele = preorder[idx];
       TreeNode* root = new TreeNode(ele);
       idx++;    // from front traversal
        int pos = find(s , e , ele , inorder);
       root->left = solve(preorder , inorder , s , pos-1 , idx);
       root->right = solve(preorder , inorder , pos+1 , e , idx);
       return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int idx = 0;
        int s = 0;
        int e =preorder.size()-1;
      return  solve(preorder , inorder , s , e , idx);
       
    }
};