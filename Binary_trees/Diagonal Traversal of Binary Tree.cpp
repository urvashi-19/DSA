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
    vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   queue<Node *>q;
   q.push(root);
   while(!q.empty()){
      
       Node*top = q.front();
       q.pop();
       while(top!=NULL){
            if(top->left)q.push(top->left);
           ans.push_back(top->data);
           top = top->right;
       }
       
   }
   return ans;
}


};