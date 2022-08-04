//
// Created by Hady Ahmed on 8/1/2022.
//
/*
 █████╗ ██╗   ██╗ ██████╗ ██╗   ██╗███████╗████████╗       ██████╗  █████╗ ██╗   ██╗     ██╗ ██╗  ██╗
██╔══██╗██║   ██║██╔════╝ ██║   ██║██╔════╝╚══██╔══╝       ██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗███║
███████║██║   ██║██║  ███╗██║   ██║███████╗   ██║          ██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝╚██║
██╔══██║██║   ██║██║   ██║██║   ██║╚════██║   ██║          ██║  ██║██╔══██║  ╚██╔╝      ████████╗ ██║
██║  ██║╚██████╔╝╚██████╔╝╚██████╔╝███████║   ██║          ██████╔╝██║  ██║   ██║       ╚██╔═██╔╝ ██║
╚═╝  ╚═╝ ╚═════╝  ╚═════╝  ╚═════╝ ╚══════╝   ╚═╝          ╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝  ╚═╝

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
int solve(int i, int j, vector<vector<int>> &dp, int& m, int& n) {
    if(i == m-1 || j == n-1) return 1;
    if(dp[i][j] != 0)return dp[i][j];

    dp[i][j] = solve(i+1, j, dp, m, n) + solve(i, j+1, dp, m, n);
    return dp[i][j];
}
int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m , vector<int>(n , 0));
    return solve(0, 0, dp, m, n);
}
//int main(){
//    improve
//    END
//}
