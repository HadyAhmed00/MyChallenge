//
// Created by Hady Ahmed on 7/14/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define modl 1000000007
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* solve(int start_pre, int start_in, int end_in, vector<int>& preorder, vector<int>& inorder)
{

    if(start_in > end_in || start_pre > preorder.size()-1) return NULL;

    TreeNode* root = new TreeNode(preorder[start_pre]);

    int index = 0;
    for(int i = start_in; i <= end_in; i++)
        if(root->val == inorder[i]) index = i;

    root->left = solve(start_pre+1, start_in, index-1, preorder, inorder);
    root->right = solve(start_pre+index-start_in+1, index+1, end_in, preorder, inorder);
    return root;
}
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    return solve(0, 0, inorder.size()-1, preorder, inorder);
}
