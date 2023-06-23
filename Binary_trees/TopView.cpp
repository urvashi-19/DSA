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
      vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        
        queue<pair<Node* , int>>q;
        q.push({root , 0});
        map<int , int>mp;
        
        while(!q.empty()){
            int n = q.size();
            while(n--){
                Node* top = q.front().first;
                int dis = q.front().second;
                q.pop();
                if(mp.find(dis)==mp.end()){
                   mp[dis] = top->data;
                }
                // assign -1 to left
                if(top->left){
                    q.push({top->left , dis-1});
                }
                // assign +1 to right
                if(top->right){
                    q.push({top->right , dis+1});
                }
                
            }
        }
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }


};