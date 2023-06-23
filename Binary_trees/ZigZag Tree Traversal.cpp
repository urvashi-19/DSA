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
     vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int>ans;
    	queue<Node* > q;
    	q.push(root);
    	bool flag = true;
    	while(!q.empty()){
    	    int n = q.size();
    	    vector<int>temp;
    	    while(n--){
    	       Node* top = q.front();
    	       q.pop();
    	       temp.push_back(top->data);
    	       if(top->left)q.push(top->left);
    	       if(top->right)q.push(top->right);
    	    }
    	    if(flag== false){
    	        reverse(temp.begin() , temp.end());
    	        flag = true;
    	    }
    	    else{
    	        flag = false;
    	    }
    	    for(auto it : temp){
    	        ans.push_back(it);
    	    }
    	}
    	return ans;
    }


};