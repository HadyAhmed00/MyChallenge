//
// Created by Hady Ahmed on 7/11/2022.
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

#define ll long long int
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

int jump(vector<int>cost,vector<int>&dp,int n)
{
    if(n<=1)
        return dp[n]=cost[n];
    if(dp[n]!=-1)
        return dp[n];

    int m;

    m = min(jump(cost,dp,n-1)+cost[n],
            jump(cost,dp,n-2)+cost[n]);

    dp[n]=m;
    return dp[n];
}


int minCostClimbingStairs(vector<int>& cost) {

    if(cost.size()==1){
        return 0;
    }
    vector<int>dp(cost.size()+5,-1);
    return min(jump(cost,dp,cost.size()-1), jump(cost,dp,cost.size()-2));


}
//
//int main(){
//    vector<int> cost ={1,100,1,1,1,100,1,1,100,1};
//    cout<<minCostClimbingStairs(cost);
//    return 0;
//}
