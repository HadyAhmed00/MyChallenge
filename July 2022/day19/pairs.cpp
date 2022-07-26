//
// Created by Hady Ahmed on 7/17/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗  ██╗ █████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗███║██╔══██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝╚██║╚██████║
██║  ██║██╔══██║  ╚██╔╝      ████████╗ ██║ ╚═══██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝ ██║ █████╔╝
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

int kInversePairs(int n, int k) {
    const int MOD = 1e9 + 7;
    vector<int> dp(k + 1);
    dp[0] = 1;
    for (int num = 0; num < n; num++) {
        int mx = n - num - 1;
        int window = 0;
        for (int i = 0; i <= mx; i++) {
            if (k - i < 0) break;
            window += dp[k - i];
            if (window >= MOD) window -= MOD;
        }
        for (int i = k; i >= 0; i--) {
            int curr = dp[i];
            dp[i] = window;
            window -= curr;
            if (window < 0) window += MOD;
            if (i - mx - 1 >= 0) {
                window += dp[i - mx - 1];
                if (window >= MOD) window -= MOD;
            }
        }

    }
    return dp[k];
}

