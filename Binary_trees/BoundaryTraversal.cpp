#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
   void Treeleft(Node*root , vector<int>&ans){
          if(root==NULL) return;
           if(root->left){
               ans.push_back(root->data );
               Treeleft(root->left , ans);
           }
           
           else if(root->right){
               ans.push_back(root->data);
               Treeleft(root->right , ans);
           }
       }
       
       void Treeright(Node*root , vector<int>&ans){
             if(root==NULL) return;
           if(root->right){
               
               Treeright(root->right , ans);
               ans.push_back(root->data );
           }
           
           else if(root->left){
              
               Treeright(root->left , ans);
                ans.push_back(root->data );
           }
          
       }
       void leaf(Node*root , vector<int>&ans){
           if(root==NULL) return;
           leaf(root->left , ans);
           if(root->left==NULL && root->right==NULL) ans.push_back(root->data);
            leaf(root->right , ans);
       }
       
       
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(root==NULL) return ans;
        ans.push_back(root->data);
       if(root->left == NULL && root->right == NULL)
            return ans;
            
            
            
        Treeleft(root->left , ans);
        
        leaf(root , ans);
       
        Treeright(root->right , ans);
        
        return ans;
        
    }


};