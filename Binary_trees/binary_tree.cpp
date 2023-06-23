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

int main(){
    node* root = NULL;
    root = buildTree(root);
}

// for dfs tc is : O(n) and sc is : O(n) in worst case that is skewd vrna O(logn)
// for bfs tc is : o(n) and sc is : O(n) as we are using queue;