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
node* insertBst(node* root , int data){
    if(root==NULL) {
        root = new node(data);
        return root;
    }
    if(data > root->data){
        root->right = insertBst(root->right , data);
    }
    else{
        root->left = insertBst(root->left , data);
    }
    return root;
}

void takeInput(node* root){
    int data;
    cin>>data;
    while(data!=-1){
        insertBst(root , data);
        cin>>data;
    }
}

int main(){
    node* root = NULL;
    cout<<" Enter data to create bst\n";
    takeInput(root);
}

// tc is equal to height of it so O(log h)