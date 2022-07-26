//
// Created by Hady Ahmed on 7/26/2022.
//
//Definition for a binary tree node.
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗ ███████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗╚════██║
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝   ██╔╝
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝   ██╔╝
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗  ██║
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝  ╚═╝
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#include <stack>
#include <cmath>
#include <queue>
#include <utility>
#include <cstring>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    //base case
    if (root == NULL || root == p || root == q) {
        return root;
    }
    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    //result
    if(left == NULL) {
        return right;
    }
    else if(right == NULL) {
        return left;
    }
    else { //both left and right are not null, we found our result
        return root;
    }
}