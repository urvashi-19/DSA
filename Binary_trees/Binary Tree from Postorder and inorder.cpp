#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

    int find(int start, int e, int ele, vector<int> &inorder)
    {

        for (int i = start; i <= e; i++)
        {
            if (inorder[i] == ele)
                return i;
        }
        return -1;
    }
    TreeNode *solve(vector<int> &postorder, vector<int> &inorder, int s, int e, int &idx)
    {
        if (s > e)
            return NULL;

        int ele = postorder[idx];
        TreeNode *root = new TreeNode(ele);
        idx--; // traversal from the end;
        int pos = find(s, e, ele, inorder);
        root->right = solve(postorder, inorder, pos + 1, e, idx);
        root->left = solve(postorder, inorder, s, pos - 1, idx);

        return root;
    }
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        int idx = postorder.size() - 1;
        int s = 0;
        int e = postorder.size() - 1;
        return solve(postorder, inorder, s, e, idx);
    }
};