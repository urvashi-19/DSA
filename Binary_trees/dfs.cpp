# include<bits/stdc++.h>
using namespace std;
class node{
   public:

   int data;
   node* left;
   node* right;

// constructor
   node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
   }

};

node* buildTree(node* root){
     cout<<"ENTER THE DATA:\n";
     int data ; cin>>data;
     root = new node(data);
     if(data==-1) return NULL;
     cout<<"ENTER THE DATA FOR LEFT:" <<data<<endl;
     root->left = buildTree(root->left);
     cout<<"ENTER THE DATA FOR RIGHT: "<<data<<endl;
     root->right = buildTree(root->right);
     return root;
    
   }

   void dfs(node* root){
     if(root==NULL) return ;
      cout<<root->data<<" ";
      dfs(root->left);
      dfs(root->right);
   }

   int main(){
    node* root = NULL;

    root = buildTree(root);
    cout<<"dfs : \n";
     dfs(root);
    
}