//
// Created by Hady Ahmed on 7/27/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗  █████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗██╔══██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝╚█████╔╝
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝ ██╔══██╗
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗╚█████╔╝
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝ ╚════╝

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
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector<int> res;
void dfs(TreeNode* node){

    if(node== nullptr)
        return;
    res.push_back(node->val);

    dfs(node->left);
    dfs(node->right);
}
void flatten(TreeNode* root) {
    dfs(root);
    TreeNode* moving= root;
    for (int i = 0; i < res.size(); ++i) {
        moving->val= res[i];
        moving->left= nullptr;
        if(i!=res.size()-1)
        {
            moving->right=new TreeNode(0);
            moving= moving->right;
        }
    }

}
//int main(){
//    improve
//    TreeNode* t1 = new TreeNode(1);
//    TreeNode* t2 = new TreeNode(2);
//    TreeNode* t3 = new TreeNode(3);
//    TreeNode* t4 = new TreeNode(4);
//    TreeNode* t5 = new TreeNode(5);
//    TreeNode* t6 = new TreeNode(6);
//    t1->right= t5;
//    t1->left= t2;
//    t2->left=t3;
//    t2->right=t4;
//    t5->right=t6;
//    flatten(t1);
//
//
//    END
//    return 0;
//}
