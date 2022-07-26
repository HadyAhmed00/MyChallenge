//
// Created by Hady Ahmed on 7/16/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗  ██╗ █████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗███║██╔══██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝╚██║╚█████╔╝
██║  ██║██╔══██║  ╚██╔╝      ████████╗ ██║██╔══██╗
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝ ██║╚█████╔╝
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝  ╚═╝ ╚════╝

 */
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
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


int dp[55][55][55];

long long mod = 1e9 + 7;

int dfs(int i, int j, int n, int m, int moves)
{
    // base case, if we reached out of grid

    if(i < 0 || i >= n || j < 0 || j >= m)
        return 1;

    // if no moves are remaining

    if(moves <= 0)
        return 0;

    // if already calculated

    if(dp[i][j][moves] != -1)
        return dp[i][j][moves];

    // call for upper side

    int up = dfs(i - 1, j, n, m, moves - 1);

    // call for down side

    int down = dfs(i + 1, j, n, m, moves - 1);

    // call for left side

    int left = dfs(i, j - 1, n, m, moves - 1);

    // call for right side

    int right = dfs(i, j + 1, n, m, moves - 1);

    // total paths will be sum of all the paths from all four directions

    // store the result and return it

    return dp[i][j][moves] = (up % mod + down % mod + left % mod + right % mod) % mod;
}

int findPaths(int n, int m, int maxMove, int startRow, int startColumn) {

    // initialize the dp with -1

    memset(dp, -1, sizeof(dp));

    return dfs(startRow, startColumn, n, m, maxMove);
}
//int main(){
//
//    improve
//    cout<<findPaths(2,2,
//                    2,
//                    0,
//                    0);
//    END
//    return 0;
//}
