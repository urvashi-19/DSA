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
      vector <int> bottomView(Node *root) {
        // Your Code Here
        map<int , int>mp;
        queue<pair<Node* , int>>q;
        q.push({root , 0});
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            Node* top = temp.first;
            int level = temp.second;
            
                mp[level] = top->data;
            
            if(top->left) q.push({top->left , level-1});
            if(top->right) q.push({top->right , level+1});
        }
        
        vector<int>ans;
        for(auto it = mp.begin() ; it!= mp.end() ; it++){
            ans.push_back(it->second);
        }
        return ans;
    }


};