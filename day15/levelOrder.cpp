//
// Created by Hady Ahmed on 7/13/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#include <stack>
#include <cmath>
#include <queue>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define modl 1000000007
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

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>>res;
    queue<TreeNode*> q;
    vector<int> tmp;
    tmp.push_back(root->val);
    res.push_back(tmp);
    q.push(root);
    while (!q.empty()){
        TreeNode* curr = q.front();
        q.pop();
        vector<int> tt;
        if(curr->left!= nullptr){
            q.push(curr->left);
            tt.push_back(curr->left->val);
        }
        if(curr->right!= nullptr)
        {
            q.push(curr->right);
            tt.push_back(curr->right->val);
        }
        res.push_back(tt);
    }
    return res;
}
//
//
//int main(){
//
//    improve
//
//    return 0;
//}
