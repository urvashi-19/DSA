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
     if(data==-1) {
        return NULL;
     }
     cout<<"ENTER THE DATA FOR LEFT:" <<data<<endl;
     root->left = buildTree(root->left);
     cout<<"ENTER THE DATA FOR RIGHT: "<<data<<endl;
     root->right = buildTree(root->right);
     return root;
    
   }

   void bfs(node* root){
     queue<node* >q;
     q.push(root);
     
     while(!q.empty()){
        int n = q.size();
        while(n--){
            node* top = q.front();
            cout<<top->data<<" ";
            q.pop();
            if(top->left!=NULL){
                q.push(top->left);
            }
            if(top->right!=NULL){
                q.push(top->right);
            }
        }
        cout<<endl;
     }

   }

int main(){
    node* root = NULL;

    root = buildTree(root);
    cout<<"bfs: \n";
     bfs(root);
    
}